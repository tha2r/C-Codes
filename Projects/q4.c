#include <stdio.h>
#include <conio.h>
int main()
{
int x,y,m;
float z;
printf("enter the first number and second number.");
scanf("%d%d",&x,&y);
printf("choose.....\n");
printf("1-add\n 2-sub\n 3-mult\n 4-div\n.");
scanf("%d",&m);
switch(m)
{
case 1 : z=x+y; break;
case 2 : z=x-y; break;
case 3 : z=x*y; break;
case 4 : z=x/y; break;
default: printf("You Must Choose 1,2,3 or 4 Ya 7Ayawan.");
}
printf("z=%f",z);
getch();
return 0;
}
