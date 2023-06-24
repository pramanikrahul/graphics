# include<stdio.h>
# include<conio.h>
# include<dos.h>
void main()
{
char name[100];
int i;
clrscr();
printf("enter the name \n");
scanf("%s",&name);

for(i=0;i<=50;i++)
{
textcolor(i+BLINK);
printf("\t");
cprintf("HAPPY BIRTHDAY RAHUL %s \2");
printf("\n");
delay(200);
}
getch();
}



