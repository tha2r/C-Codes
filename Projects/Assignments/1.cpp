#include <stdio.h>
#include <conio.h>
#include <string.h> 
typedef struct
{
       char name[10];
       int marks[5];
} student;

int main()
{
int xx=0,avg=0; 
char *mm[10]={"xxx"};  
student std[xx];
printf("Enter Student name (xxx) to stop : ");
scanf("%s",std[xx].name);

while(strcmpi(std[xx].name,*mm) != 0)
{

//printf("%s",std.name);
for(int i=0;i<5;i++)
{
        printf("Enter Grade %d :",(i+1));
        scanf("%d",&std[xx].marks[i]);
}
xx++;
student std[xx];
printf("Enter Student name (xxx) to stop : ");
scanf("%s",std[xx].name);
if(strcmpi(std[xx].name,*mm) == 0){ break; }
}

for(int j=0;j<xx;j++)
{
 printf("Student %s Grade is :",std[j].name);
    for(int x=0;x<5;x++)
    {
      avg+=std[j].marks[x];
    }
    avg=(avg/5);
    
    if(avg > 90)
    {
       printf("A");    
           } else {
    if(avg > 80)
    {
       printf("B");    
           } else {
if(avg > 70)
    {
       printf("C");    
           } else {
if(avg > 60)
    {
       printf("D");    
           }
           else
           {
               printf("F");
           }
           }}}
           
}
 getch();
 return 0;   
}
