#include <stdio.h>
#include <conio.h>
int main()
{
 int x[5];
 for(int i=0;i<5;i++)
 {
   x[i]=i;
 }
 for(int i=0;i<5;i++)
 {
   printf("x[%d]=%d\n",i,x[i]);
    }
 getch();
 return 0;   
}
