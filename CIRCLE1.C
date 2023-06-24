# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<dos.h>
void main()
{
int gd=DETECT,gm;
int x,y,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=200;i>7;i--)
{
delay(100);
setcolor(i);
arc(x,y,0,360,i-20);
}
getch();
closegraph();
}