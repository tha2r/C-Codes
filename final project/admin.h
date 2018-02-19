void admin (FILE *fp,STD emp){
char ac ; /* ac :admin choice */ 
char auser [10] = "admin";
char user [10]; 
int pass ;
int i;
char tid[10] ; /* temp ID */
char tname [10] ;
STD tmp;
printf ( " Enter User name " ) ;
gets (auser) ; 
printf (" Enter password");
scanf("%d",&pass);
if(pass == 123456 && (strcmp(auser,user)==0)) {
          printf ( "\n\t\t\t\t Admin Menu ") ;
          printf ( "\n\n\t\t\t\t1. Add new student.") ;
          printf ( "\n\n\t\t\t\t2. Delete student. ") ;
          printf ( "\n\n\t\t\t\t3. Insert a student’s mark for a course.") ;
          printf ( "\n\n\t\t\t\t4. Search about a student by name.") ;
          printf ( "\n\n\t\t\t\t5. Search about a student by ID.") ;
          printf ( "\n\n\t\t\t\t6. Reports.") ; 
          printf ( "\n\n\t\t\t\t0. Logout.") ;
          printf ( "\n\n\t\t\t\tWhat is Your Choice? ");
           ac = getchar () ;rewind(fp);
           switch (ac) {
           case 1 : 
                       for (i=0;i<50;i++){
                       fread(&tmp,sizeof(STD),1,fp);
                       if(strcmp(tmp.name,emp.name) == 0){
                       printf ("Enter name for new student:\n");
                       gets(tmp.name);
                       printf ("Enter Student ID \n");
                       gets (tmp.sID);
                        printf ("Enter Student adress \n");
                       gets (tmp.sadress);               
                       tmp.rcourses = {""};
                       fseek(fp,sizeof(STD)*i,SEEK_SET);
                       fwrite (&tmp,sizeof(STD),1,fp) ; 
                       }/*end if*/                   
                        }/*end for loop for empty*/
                        if(i==50){printf ("LIST FULL");}
                      break ; 
          case 2 : printf ( " Enter ID for student to delete \n ");
          gets (tid);
          rewind(fp);
          for(i=0;i<50,i++){
          fread (tmp,sizeof(STD),1,fp);
          if(strcmp(tmp.sID,tid)==0){
              fseek(fp,sizeof(STD)*i,SEEK_SET);
              fwrite (&emp,sizeof(STD),1,fp) ; 
              printf ("Name had been deleted ;) \n ");
                                     }/*end if */ 
              
                            }if(i==50)printf ("NOT FOUND \a\n");      
          break;
          case 3 : printf ( " Enter Student ID \n " ) ;
           break ; 
           case 4 :rewind(fp);
           printf ( " Enter student's name to search for: \n ");
            gets (tid);
           for (i=0;i<50;i++){
                       fread(&tmp,sizeof(STD),1,fp);
                       if(strcmp(tmp.name,tid)==0)
                            print ("Name founded in block %d",i+1);
                       break;
                       }/*end for loop for search by name */
                       if(i==50)printf ("NOT FOUND \a\n"); 
           break ;
           case 5 : rewind(fp);
           printf ( " Enter student's ID to search for: \n ");
            gets (tid);
           for (i=0;i<50;i++){
                       fread(&tmp,sizeof(STD),1,fp);
                       if(strcmp(tmp.sID,tid)==0)
                            print ("ID founded in block %d",i+1);
                       break;
                       }/*end for loop for search by name */
                       if(i==50)printf ("NOT FOUND \a\n"); 
           break;
           case 6 :
           break ;            
                    } /* end switch ac */ 
                       } /* end if ... for emphasis admin and password */
                       else {printf ("Username of Password error \n ");} 
                        } /* end function of admin */ 
