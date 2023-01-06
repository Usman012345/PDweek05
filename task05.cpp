#include<iostream>
#include<windows.h>
using namespace std;
char getCharAtxy(short int x, short int y);
void maze();
void pacman(int x,int y);
void gotoxy(int x,int y);
void space(int x,int y);
main()
{
    system("cls");
    int x,y;
    bool running= true;
    x=6;
    y=6;
    maze();
    gotoxy(x,y);
    while(true)
    {
    
    if(GetAsyncKeyState(VK_LEFT))
     {
        char nextchar=getCharAtxy(x-1,y);
        if (nextchar==' ')
        {
            space(x,y);
            x=x-1;
            pacman(x,y);
        }    
    }
        if(GetAsyncKeyState(VK_RIGHT))
    {
        char nextchar=getCharAtxy(x+1,y);
        if(nextchar==' ')
        {
                space(x,y);
                x=x+1;
                pacman(x,y);
        }
    }
        if(GetAsyncKeyState(VK_UP))
    {
        char q=getCharAtxy(x,y-1);
        if(q==' ')
        {    
    space(x,y);
    y=y-1;
    pacman(x,y);
    }
    }
        if(GetAsyncKeyState(VK_DOWN))
    {
        char n=getCharAtxy(x,y+1);
        if(n==' ')
        {
        space(x,y);
        y=y+1;
        pacman(x,y);
    }
    }
    if(GetAsyncKeyState(VK_ESCAPE))
    {
    space(x,y);
    y=y+1;
    pacman(x,y);
    }
    Sleep(200);
    }
}
void maze()
{
cout << "  ##################################################################### " << endl;
cout << " ||.. .....................................................   ......  ||" << endl;
cout << " ||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..    %%%%   ||" << endl;
cout << " ||..        |%|   |%|     |%|...     |%|        |%|  |%|..     |%|   ||" << endl;
cout << " ||..        |%|   |%|     |%|...     |%|        |%|  |%|..     |%|   ||" << endl;
cout << " ||..        %%%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..    %%%.   ||" << endl;
cout << " ||..        |%|       . . |%|...    ............... |%| ..       .   ||" << endl;
cout << " ||..        %%%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..    %%%.   ||" << endl;
cout << " ||..               |%|.             |%|......       |%| ..    |%|.   ||" << endl;
cout << " ||..     ......... |%|.        U    |%|......|%|        ..    |%|.   ||" << endl;
cout << " ||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.   ||" << endl;
cout << " ||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.       ||" << endl;
cout << " ||..|%|  |%|   |%|..           ...|%|     %%%%%%        . |%|.       ||" << endl;
cout << " ||..|%|            .           ...|%|               |%| ..|%|.       ||" << endl;
cout << " ||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%   ||" << endl;
cout << " ||...............................................   |%| ..........   ||" << endl;
cout << " ||   ............................................          .......   ||" << endl;
cout << " ||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.       ||" << endl;
cout << " ||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.       ||" << endl;
cout << " ||..|%|            .     S     ...|%|               |%| ..|%|.       ||" << endl;
cout << " ||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%     |%| ..|%|%%%%%   ||" << endl;
cout << " ||...............................................   |%| ..........   ||" << endl;
cout << " ||  .............................................          .......   ||" << endl;
cout << "  ##################################################################### " << endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),  coordinates);
}
void space(int x,int y)
{
    gotoxy(x,y);
    cout<<" ";

}
void pacman(int x,int y)
{
    gotoxy(x,y);
    cout<<"p";
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}