#include <stdio.h>
#include <conio.h>
int salary(int daySalary, int workDays); 
int main() {
    int ss,ww;
printf("Enter Daily Salary :");
scanf("%d",&ss);
printf("Enter  Work   days :");
scanf("%d",&ww);
printf("Salary is : %d\n",salary(ss,ww));
 getch();  return 0;   
}
int salary(int daySalary, int workDays)
{
       int s;
       s = daySalary*workDays;
       return s;
}
