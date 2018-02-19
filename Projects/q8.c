#include <stdio.h>
#include <conio.h>
int main()
{
int count;
for(count=1;count<=10;count++)
{
if(count==5){
continue;
}
printf("%d\n",count);
}
printf("For Loop Broken At %d",count);
getch();
return 0;
}
