#include <stdio.h>

int main ( )
{
  int num1,num2,num3;
  int maximum(int x,int y, int z);
  
    printf("Enter First Number:");
    scanf("%d",&num1);

    printf("Enter Second Number:");
    scanf("%d",&num2);

    printf("Enter Third Number:");
    scanf("%d",&num3);

  printf("The Biggest Number Entered Is %d\n",maximum(num1,num2,num3));
 
 return 0;
}

int maximum(int x,int y, int z)
{
  int max;
  max=x;
  
  if(y > max){
    max=y; 
  }
  
  if(z > max){
    max=z; 
  }

  return max;
}

