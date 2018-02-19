#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
double salary=1000;
int year;
double rate=0.05;
double amount;
printf("%4s %6s\n","year","salary");
for (year=1;year<=10;year++)
{
amount=salary*pow(year,rate);
printf("%4d %6.2f\n",year,amount);
}
getch();
return 0;
}
