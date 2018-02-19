#include <stdio.h>
int main()
{
int y,m;
float x;
printf("Enter The First Value Of Y.");
scanf("%d",&y);
printf("Enter The First Value Of M.");
scanf("%d",&m);
x=(y+5)*2+3/m;
printf("x=%f",x);
getch();
return 0;
}
