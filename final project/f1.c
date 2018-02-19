# include <stdio.h> 
# include <conio.h>
# include <string.h> 
# include <admin.h>
# include <student.h>
typedef struct {
char name[20] ; 
char sID[10] ; 
char sadress [20] ;
char rcourses[5][20];} STD ; /*end student struct*/
typedef struct {
char cname [10][20]={"programming","computing", "calculas","quran","hadith","english","physics","chemmestry","mathmatic","geography"};
int cID ={1,2,3,4,5,6,7,8,9,10};
int nrs = 0; /* nrs for number of regesterd student */} course ;
FILE *stdf = fopen ("f:\\IUG\\ programming c lab \\ final project\\stdf.dat","rb+");
STD emp ={"","","",{"","","","",""}};
char menu (){
printf ( "\n\t\t\t\t Login Menu \n\n " ) ; 
printf ( "\n\n\t\t\t\t A - System Admin " ); 
printf ( "\n\n\t\t\t\t S - Student " ) ;
printf ( "\n\n\t\t\t\t X - Exit " ) ;
printf ( "\n\n\t\t\t\t What's your choice ? " ) ;
             } /* end login menu */
/*typedef stdinf{  stdinf for students and passwords 
char stdid [50][2];            student id  

               }stdinf;*/

int main() {
           int i ; 
           for (i=0;i<50;i++)
fwrite (&emp,sizeof(STD),1,stdf)
char mc;
menu();
    do {
        printf("\t\t\t");
        mc = getchar();
        switch (mc) {
            case 'a':
            case 'A': admin (stdf,emp) ;
                break;
            case 'S':
            case 's': student();
                break;
            case 'X':
            case 'x': printf(" : see you later ;)\n");
                return 0;
            default: printf(" : Choice nonexist !\a\n");
        } /* end switch */
    } while (1);
    /* end while */;
    return 0;
} /* end main */
