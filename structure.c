#include<stdio.h>
#include<stdlib.h>
#include "filerunner.c"
#include "colors.c"
#include "delay.c"
#include "strucSampleCode.c"

char sinp;
void stopicheader1()
{
  for(int i=0;i<=78;i++)
    printf("\xFE");
}

void stopicheader()
{
  for(int i=0;i<=65;i++)
    printf("\xFE");
}
void swindow()
{
    int i;
    int down=10,left=31,right=111;
    boldyellow();
    for(i=left;i<=61;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }
   
    printf("     STRUCTURES");
    for(i=81;i<=right;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }
   
    for(i=down;i<=28;i++)
    {
        gotoxy(left,i);printf("\xB2");
    }
   
    for(i=left;i<=right;i++)
    {
        gotoxy(i,28);printf("\xB2");
    }
  
    for(i=down;i<=28;i++)
    {
        gotoxy(right,i);printf("\xB2");
    }    
    
    gotoxy(58,13);  printf("[1] What are Structures ?");     
    gotoxy(58,15);  printf("[2] Sample C code ");     
    gotoxy(58,17);  printf("[3] Visual Representation "); 
    gotoxy(58,19);   printf("[4] User execution"); 
    gotoxy(32,21);  stopicheader1();     
    gotoxy(33,24);   printf("Back to Main menu (ENTER b) ");
    gotoxy(66,24);   printf("Back to 'Search' (ENTER s) ");
    gotoxy(96,24);   printf("Exit (ENTER x) ");
    //gotoxy(52,24);   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    gotoxy(58,26);   printf("Enter your choice : "); 
    fflush(stdin); 
    scanf("%c",&sinp);
    
     
}

void stopic()
{   cyan();
    gotoxy(40,50);
    //seperator();
    printf("\n\n");
    stopicheader();
    printf(" WHAT ARE STRUCTURES ? ");
    stopicheader();
    green();
    printf("\n\n\t\t\t\t\tA structure is a user-defined data type that\n\t\t\t\t\tgroups logically related data items of\n\t\t\t\t\tdifferent data types into a single unit.\n\n\t\t\t\t\tAll the elements of a structure are stored at\n\t\t\t\t\tcontiguous memory locations. A variable of structure\n\t\t\t\t\ttype can store multiple data items of different data\n\t\t\t\t\ttypes under the one name.\n\n");
    cyan();
    stopicheader1();
    stopicheader1();
}

void code()
{ 
    red();
    printf("\n\n");
    stopicheader();
    boldyellow();
    printf(" SAMPLE CODE ");
    red();
    stopicheader();
    printf("\n\n");
    boldyellow();
    codeprinter("strucSampleCode.c");
    printf("\n\n");
    red();
    stopicheader1(); 
    stopicheader1();
   
}   

void visualRep()
{
    boldyellow();
    stopicheader(); 
    //iteration 1
  purple();
  printf(" VISUAL REPRESENTATION ");
  boldyellow();
  stopicheader();
  printf("\n\nSince the compiler allocates one byte for char,\nSo it's 50 bytes for the character array - TITLE\n");
  printf("So the next memory allocation starts from 7050 and similarly for all the char arrays AUTHOR, SUBJECT \nit allocates the given bytes.");
  delay();

  printf("\n\nAnd as we know the compiler allocates two bytes for int, \ntwo bytes is allocated to BOOK_ID according to the structure.");
  printf("\n\n");
  delay();

  printf("            ____ ____ ___  \n"); 
  printf("      7000 |              |\n");
  printf("           |              |\n");
  printf("           |     title    |\n");
  printf("           |              |\n");
  printf("           |____ _____ ___|\n");
  printf("      7050 |              |\n");
  printf("           |              |\n");
  printf("           |    author    | ------------> Book 1\n");
  printf("           |              |\n");
  printf("           |____ ____ _ __| \n");
  printf("      7100 |              |\n");
  printf("           |              |\n");
  printf("           |              |\n");
  printf("           |    subject   |\n");
  printf("           |              |\n");
  printf("           |              |\n");
  printf("           |____ ____ ____|\n");
  printf("      7200 |              |\n");
  printf("           |    book_id   |\n");
  printf("           |____ _____ ___|\n");
  printf("      7202                 \n");
  printf("\n\n");
  delay();

  printf("            ____ ____ ___  \n"); 
  printf("      7202 |              |\n");
  printf("           |              |\n");
  printf("           |     title    |\n");
  printf("           |              |\n");
  printf("           |____ _____ ___|\n");
  printf("      7252 |              |\n");
  printf("           |              |\n");
  printf("           |    author    | ------------> Book 2\n");
  printf("           |              |\n");
  printf("           |____ ____ _ __| \n");
  printf("      7302 |              |\n");
  printf("           |              |\n");
  printf("           |              |\n");
  printf("           |    subject   |\n");
  printf("           |              |\n");
  printf("           |              |\n");
  printf("           |____ ____ ____|\n");
  printf("      7402 |              |\n");
  printf("           |    book_id   |\n");
  printf("           |____ _____ ___|\n");
  printf("      7404                 \n");

  stopicheader1(); stopicheader1();
}

void userinput()
{
    boldyellow();
    stopicheader();
    purple();
    printf(" USER EXECUTION ");
    boldyellow();
    stopicheader();
    cyan();

    //Code
    char  titlein[50], titlein2[50];
    char  authorin[50], authorin2[50];
    char  subjectin[100], subjectin2[100];
    int   book_idin, book_idin2;
    printf("\n\nNOW IT'S YOUR TURN !!!\n\n");

    printf("Enter title for Book 1: ");
    fgets(titlein, sizeof(titlein), stdin);
    printf("Enter author for Book 1: ");
    fgets(authorin, sizeof(authorin), stdin);
    printf("Enter subject for Book 1: ");
    fgets(subjectin, sizeof(subjectin), stdin);
    printf("Enter book_id for Book 1: ");
    scanf("%d", &book_idin);
    printf("\nBook 1 successfully added!\n");
    fflush(stdin);



    printf("\nEnter title for Book 2: ");
    fgets(titlein2, sizeof(titlein), stdin);
    printf("Enter author for Book 2: ");
    fgets(authorin2, sizeof(authorin), stdin);
    printf("Enter subject for Book 2: ");
    fgets(subjectin2, sizeof(subjectin), stdin);
    printf("Enter book_id for Book 2: ");
    scanf("%d", &book_idin2);
    printf("\nBook 2 successfully added!\n");
    
    printf("\nDisplaying Records: \n");
    strucExecution(titlein, authorin, subjectin, book_idin, titlein2, authorin2, subjectin2, book_idin2);
  
    printf("\n\n");
    boldyellow();
    stopicheader1(); stopicheader();
}

void structmain()
{
    char ch;
    do
    {
        system("cls");
        swindow();
        system("cls");
        switch(sinp)
        {
            
            case '1': stopic();
                    break;
            case '2': code();
                    break;
            case '3': visualRep();
                    break;
            case '4': 
                    fflush(stdin);
                    userinput();
                    break;
            case 'b': exit(0);
                    break;
            case 's': exit(0);
                    break;
            case 'x': exit(0);
                    break;
            
            default : printf("Sorry! You've entered a wrong choice");
                      break;            
        }
        printf("\nDo you wanna continue (y/n) : ");
        fflush(stdin);   
        scanf("%c",&ch);
    } while (ch == 'y');
}
