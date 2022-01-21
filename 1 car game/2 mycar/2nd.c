#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
#include<iostream>
void CreateNMoveEnemyCar(int x,int y,int moveFactor,colors body,colors head)
{
    setcolor(BLACK);
    rectangle(x,y+moveFactor,x+20,-30+y+moveFactor);
    setfillstyle(1,body);
    floodfill(x+1,-20+y+moveFactor-1,BLACK);

    setcolor(BLACK);
    rectangle(x+5,y+moveFactor,x+15,5+y+moveFactor);
    setfillstyle(1,head);
    floodfill(x+6,5+y+moveFactor-1,BLACK);

}
int main()
{
    //sm return screen weight
    //dword unsinges int
    //gets == return something
    // screen width = variable
    int a,b;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int enemyNormal=0,enemyFast=0,enemySlow=0;

    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);

    initwindow(screenWidth,screenHeight,"");

    a=screenWidth/2;
    b=screenHeight;




    int rectPosX=100,rectPosX2=850,speed=10;
    int page=0;

    while(1)
    {

        setcolor(3);
        line(a,0,a,b);

        setactivepage(page);
        setvisualpage(1-page);

        cleardevice();

        //Drawing a car using a rectangle and 2 circle :
        setcolor(RED);
        for(int i=0; i<=19; i++)
        {
            rectangle(rectPosX-i,600-i,rectPosX+50+i,700+i);

        }
        setcolor(BLUE);
        for(int i=0; i<=19; i++)
        {

            rectangle(rectPosX2-i,600-i,rectPosX2+50+i,700+i);
        }

        CreateNMoveEnemyCar(305,-5,enemyFast,RED,GREEN);
        CreateNMoveEnemyCar(300,-10,enemyNormal,BLUE,BROWN);
        CreateNMoveEnemyCar(250,-3,enemySlow,YELLOW,CYAN);

        enemyNormal+=5;
        enemyFast+=8;
        enemySlow+=3;




        if(GetAsyncKeyState(0x41))
        {
            rectPosX-=speed;

        }

        if(GetAsyncKeyState(0x44))
        {
            rectPosX+=speed;

        }

        if(GetAsyncKeyState(VK_LEFT))
        {
            rectPosX2-=speed;

        }

        if(GetAsyncKeyState(VK_RIGHT))
        {
            rectPosX2+=speed;

        }




        page=1-page;

        delay(50);

    }




    getch();
    closegraph();
}





