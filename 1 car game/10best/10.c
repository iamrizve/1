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

    int e_y1=-100,e_y2=-75,e_y3=-120,e_y4=-120,e_y5=-190,e_y6=-110,e_y7=-100,e_y8=-50;

    int a=screenWidth/2;
    int b=screenWidth;


    int rectPosX=100,rectPosX2=a+100,speed=20;
    int page=0;
    int d=70,m=0;

    while(1)
    {
        if(m==0)
        {
            setcolor(5);
            settextstyle(10,0,8);
            outtextxy(150,300,"Press any key for start");
            getch();
            m++;

        }
        if(m==1)
        {
            settextstyle(10,0,8);
            outtextxy(150,300,"RIZVE");
             getch();
        }


        setactivepage(page);
        setvisualpage(1-page);

        cleardevice();

        setcolor(WHITE);
        line(a,0,a,b);

        //Drawing a car
        setcolor(RED);
        if(rectPosX >0+30&& rectPosX<a-30)
        {
            for(int i=0; i<=19; i++)
            {
                int q=600-i,w=700+i;
                rectangle(rectPosX-i,q,rectPosX+30+i,w);
                if(q==e_y1)
                {
                    printf("p2 win\n");
                    break;
                }


            }
        }

        setcolor(BLUE);
        for(int i=0; i<=19; i++)
        {

            rectangle(rectPosX2-i,600-i,rectPosX2+30+i,700+i);
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


        //enemy car
        setcolor(WHITE);
        for(int i=0; i<380; i+=200)
        {
            rectangle(50,10+i+e_y3,70,50+i+e_y3);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+50,10+i+e_y3,a+70,50+i+e_y3);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(100,10+i+e_y4,120,50+i+e_y4);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+100,10+i+e_y4,a+120,50+i+e_y4);
        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(200,10+i+e_y1,220,50+i+e_y1);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+200,10+i+e_y1,a+220,50+i+e_y1);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(250,10+i+e_y7,270,50+i+e_y7);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+250,10+i+e_y7,a+270,50+i+e_y7);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(350,10+i+e_y2,370,50+i+e_y2);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+350,10+i+e_y2,a+370,50+i+e_y2);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(450,10+i+e_y5,470,50+i+e_y5);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+450,10+i+e_y5,a+470,50+i+e_y5);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(550,10+i+e_y6,570,50+i+e_y6);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(a+550,10+i+e_y6,a+570,50+i+e_y6);

        }

        for(int i=0; i<380; i+=200)
        {
            rectangle(a-50,10+i+e_y8,a-70,50+i+e_y8);

        }
        for(int i=0; i<380; i+=200)
        {
            rectangle(b-50,10+i+e_y8,b-70,50+i+e_y8);

        }



        e_y1+=2;
        if(e_y1>500)
            e_y1=-500;
        e_y2+=5;
        if(e_y2>500)
            e_y2=-500;
        e_y3+=5;
        if(e_y3>500)
            e_y3=-500;
        e_y4+=2;
        if(e_y4>500)
            e_y4=-500;
        e_y5+=3;
        if(e_y5>500)
            e_y5=-500;
        e_y6+=2;
        if(e_y6>500)
            e_y6=-500;
        e_y7+=1;
        if(e_y7>500)
            e_y7=-500;
        e_y8+=2;
        if(e_y8>500)
            e_y8=-500;














        page=1-page;

        delay(d);
        if(d>60)
        {
            d=d-1;
        }

        else
            d=10;


    }




    getch();
    closegraph();
}

