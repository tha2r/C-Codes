#include <stdio.h>
#include <conio.h>
int main()
{
int grade;
int total;
int count;
double avarage;
total=0;
avarage=0;
count=0;
printf("Avarage of 10 Grade For One Student\n");
while(count++<=10)
{
printf("Enter Grade %d\n",grade);
scanf("%d",&grade);
total=total+grade;
avarage=total/10;
}
printf("The Total Is %d",total);
printf("The Avarage Is %f",avarage);
getch();
return 0;
}
