#include <stdio.h>
#include <conio.h>

int main()
{
 int x;
 printf("enter number of lines:");
 scanf("%d",&x);
 for(int i=1;i<=x;i++)
 {
   for(int j=1;j<=i;j++)
   {
         printf("*");
   }       
   printf("\n");
 }
 getch();
 return 0;   
}
