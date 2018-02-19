# include <stdio.h>

int main ()
{

int x,y,r,z,ch;

do {
printf("\nChoose option\n1. Area Of Triangle\n2. Area Of Circle\n3. Area of Square\n4. Area of Mostateel\n5. -1 To Exit\nEnter Choice:");
scanf("%d",&ch);
printf("\n");
switch(ch)
{
case -1:
break;
case 1:
     
printf("Enter Triangle Base :");
scanf("%d",&x);
printf("Enter Triangle Height :");
scanf("%d",&y);

r = (x/2)*y;
printf("Triangle Area is :%d",r);

break; 
case 2:

printf("Enter Circle Radius :");
scanf("%d",&r);

x = (2 * 3.14) * r;
printf("Circle Area is :%d",x);

break;          
case 3:

printf("Enter Square Height :");
scanf("%d",&r);

x = r * r;
printf("Square Area is :%d",x);

break;
case 4:
     
printf("Enter Mostateel Height :");
scanf("%d",&r);
printf("Enter Mostateel Width :");
scanf("%d",&y);

x = r * y;
printf("Mostateel Area is :%d",x);

break;
default:
        printf("Wrong Choice\n");
break;
}
printf("\n------------------------------- \n");
} while (ch != -1);

return 0;


}
