#include<stdio.h>
#include<stdlib.h>
#include "filerunner.c"
#include "colors.c"
#include "delay.c"
#include "unioncode.c"

char inp;
void seperator()
{
  for(int i=0;i<=155;i++)
    printf("\xB2");
  printf("\n");
}

void topicheader1()
{
  for(int i=0;i<=78;i++)
    printf("\xFE");
}

void topicheader()
{
  for(int i=0;i<=65;i++)
    printf("\xFE");
}
void window()
{
    int i;
    int down=10,left=31,right=111;
   boldyellow();
    for(i=left;i<=61;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }
   
    printf("       UNION");
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
    
    gotoxy(58,13);  printf("[1] What is a union ?");     
    gotoxy(58,15);  printf("[2] Sample C code ");     
    gotoxy(58,17);  printf("[3] Visual Representation "); 
    gotoxy(58,19);   printf("[4] User execution"); 
    gotoxy(32,21);  topicheader1();     
    gotoxy(33,24);   printf("Back to Main menu (ENTER b) ");
    gotoxy(66,24);   printf("Back to 'Search' (ENTER s) ");
    gotoxy(96,24);   printf("Exit (ENTER x) ");
    //gotoxy(52,24);   printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    gotoxy(58,26);   printf("Enter your choice : "); 
    fflush(stdin); 
    scanf("%c",&inp);
    
     
}

void topic()
{   cyan();
    gotoxy(40,50);
    //seperator();
    printf("\n\n");
    topicheader();
    printf(" WHAT IS  A UNION ? ");
    topicheader();
    green();
    printf("\n\n\t\t\t\t\tA union is a user defined data type, like structure. It groups\n\t\t\t\t\tlogically related variables into a single unit.\n\n\t\t\t\t\tThe union data type allocates the space equal to\n\t\t\t\t\tspace need to hold the largest data member of union.\n\n\t\t\t\t\tIt allows different types of variable to share same space in memory.\n\n");
    cyan();
    topicheader1();
    topicheader1();
}
void code()
{ 
    red();
    printf("\n\n");
    topicheader();
    boldyellow();
    printf(" SAMPLE CODE ");
    red();
    topicheader();
    printf("\n\n");
    boldyellow();
    codeprinter("unioncode.c");
    printf("\n\n");
    red();
    topicheader1(); 
    topicheader1();
   
}  
void visualRep()
{
    boldyellow();
    topicheader(); 
    //iteration 1
  purple();
  printf(" VISUAL REPRESENTATION ");
  boldyellow();
  topicheader();

  printf("\n\n");
  printf("Size of the union is the size of its largest field\n");
  printf("because sufficient number of bytes must be reserved to store the largest sized field\n");
  delay();
  printf("\nSince, here character array STR allocates maximum memory of 20 bytes,");
  printf("\nsize of the UNION is 20 bytes..");
  printf("\n\n");
  delay();

  printf("            ____ ____ ____                        \n");
  printf("      7000 |              |   ^     ^   ^         \n");
  printf("           |              |   |     |   |  i      \n");
  printf("           |____ _____ ___|   |     |   v         \n");
  printf("      7002 |              |   |     |             \n");
  printf("           |              |   |     | f           \n");
  printf("           |              |   |     |             \n");
  printf("           |              |   |     |             \n");
  printf("           |____ ____ _ __|   |     v             \n");
  printf("      7004 |              |   |                   \n");
  printf("           |              |   |                   \n");
  printf("           |              |   |                   \n");
  printf("           |              |   | str[20]           \n");
  printf("           |              |   |                   \n");
  printf("           |              |   |                   \n");
  printf("           |              |   |                   \n");
  printf("           |              |   |                   \n");
  printf("           |              |   |                   \n");
  printf("           |____ _____ ___|   v                   \n");
  printf("      7020                                        \n");

  topicheader();topicheader1();

}
void userinput()
{
    boldyellow();
    topicheader();
    purple();
    printf(" USER EXECUTION ");
    boldyellow();
    topicheader();
    cyan();
    printf("\n\nNOW IT'S YOUR TURN !!!\n\n");

    int i;
    float f;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a floating point number: ");
    scanf("%f", &f);
    fflush(stdin);
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    unionExecution(i, f, str);

    printf("\n\n");
    boldyellow();
    topicheader1(); topicheader();
}
void unionmain()
{
    char ch;
    do
    {
        system("cls");
        window();
        system("cls");
        switch(inp)
        {
            
            case '1': topic();
                    break;
            case '2': code();
                    break;
            case '3': visualRep();
                    break;
            case '4': userinput();
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