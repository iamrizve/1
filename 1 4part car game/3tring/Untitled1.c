#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int page=0;
    int t_y=-300;//time of y axis;
    int e_y=-500;//enemy of y axis;
    int a=250,b=260;

    while(1)
    {

        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

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
        for(int i=0; i<450; i+=105)
        {
            rectangle(290,10+i+t_y,310,50+i+t_y);
            setfillstyle(1,WHITE);
            floodfill(291,11+i+t_y,WHITE);
        }

        t_y+=15;
        if(t_y>500)
            t_y=-500;

        //enemy car
        for(int i=0; i<450; i+=105)
        {
            rectangle(240,10+i+e_y,250,50+i+e_y);
            setfillstyle(1,WHITE);
            floodfill(241,11+i+e_y,WHITE);

        }


        e_y+=55;
        if(e_y>500)
            e_y=-500;

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

        page=1-page;
        delay(100);

    }


    getch();
}



















