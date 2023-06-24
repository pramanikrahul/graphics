# include<stdio.h>
# include<conio.h>
# include<graphics.h>
# include<stdlib.h>
# include<dos.h>
void main()
{
int gd=DETECT,gm,x,y,i;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
x=600;
y=600;
for(i=1;i<=5000;i++)
{
if(i%1000==0)
{
cleardevice();
}
setcolor(random(15));
circle(random(x),random(y),random(15));
delay(5);
}
getch();
closegraph();
}

