# include <stdio.h>

int main ()
{

int amount,dis,res,final;

printf("Enter Amount:");
scanf("%d",&amount);

if(amount <200)
{
  dis=0;        
} else if (amount < 500)
{
  dis=5;
}
else
{
 dis=10;   
}

res = amount / dis;
final = amount - res;
printf("Amount before discount is :%d\nAmount After discount is :%d",amount,final);


getch ();
return 0;


}
