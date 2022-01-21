#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20,height=20,gameOver;
int x,y,fruitX,fruitY,score,flag;
void setup()
{
    gameOver=0;

    x=width-2;
    y=height-2;

}
void draw()
{
    int i,j;
    for(i=0; i<width; i++)
    {
        for(j=0; j<height; j++)
        {
            if(i==0||i==height-1||j==0||j==width-1)
                printf("#");
            else
            {
                if(i==x&&j==y)
                    printf("O");
                else
                    printf(" ");
            }

        }
        printf("\n");
    }
}
void input()
{
    if(kbhit())
    {
        switch(getch())
        {
        case 'a':
            flag=1;//aswz
            break;
        case 's':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        case 'z':
            flag=4;
            break;
        case 'x':
            gameOver=1;
            break;
        }
    }
}
int main()
{
    setup();
    draw();
    input();
    getch();
}
