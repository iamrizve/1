#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    //for background
    setcolor(CYAN);
    rectangle(0,0,1000,1000);
    setfillstyle(1,CYAN);
    floodfill(1,1,CYAN);

    //creating track
    setcolor(WHITE);
    rectangle(200,-1,400,500);
    setfillstyle(1,8);
    floodfill(201,0,WHITE);

    //line in road
    for(int i=0; i<500; i+=65)
    {
        rectangle(290,10+i,310,50+i);
        setfillstyle(1,WHITE);
        floodfill(291,11+i,WHITE);
    }

    //for life and point
    settextstyle(10,0,2);
    outtextxy(10,10,"LIFE:");
    outtextxy(10,40,"POINTS");

    //drawing circle for life
    setfillstyle(1,WHITE);
    circle(90,20,6);
    floodfill(91,21,WHITE);

    circle(110,20,6);
    floodfill(111,21,WHITE);

    circle(130,20,6);
    floodfill(131,21,WHITE);

    outtextxy(100,40,"0");


    getch();
}


















