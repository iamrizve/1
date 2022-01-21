

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
#include<iostream>
int main()
{
    //sm return screen weight
    //dword unsinges int
    //gets == return something
    // screen width = variable

    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);

    initwindow(screenWidth,screenHeight,"");

    int rectPosX=100,rectPosX2=850,speed=10;
    int page=0;

    while(1)
    {

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

        delay(5);

    }




    getch();
    closegraph();
}





