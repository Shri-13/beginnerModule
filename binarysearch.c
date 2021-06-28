#include<stdio.h>
#include<stdlib.h>
#include "filerunner.c"
#include "colors.c"
#include "delay.c"
#include "bsearch.c"

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
   
    printf("   BINARY SEARCH");
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
    
    gotoxy(58,13);  printf("[1] What is binary search ?");     
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
    printf(" WHAT IS BINARY SEARCH ? ");
    topicheader();
    green();
    printf("\n\n\t\t\t\t\tSearch a sorted array by repeatedly dividing the search interval in half.\n\n\t\t\t\t\t1.Begin with an interval covering the whole array.\n\t\t\t\t\t2.If the value of the search key is less than the item in the middle of the interval,\n\t\t\t\t\t\t --> narrow the interval to the lower half.\n\t\t\t\t\t3.Otherwise,\n\t\t\t\t\t\t --> narrow it to the upper half.\n\t\t\t\t\t4.Repeatedly check until the value is found or the interval is empty.\n\n\n");
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
    codeprinter("bsearch.c");
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
  red();
  printf(" ____ ____ ____ ____ ____ ____ ____\n");
  printf("|    |    |    |    |    |    |    |\n");
  boldyellow();
  printf("  01   02   03   04   05   07   10\n");
  red();
  printf("|____|____|____|____|____|____|____|\n");
  boldyellow();
  printf("  0    1    2    3    4     5    6\n\n");
  white();
  printf("Required Element --> 10");
  delay();
  printf("\n\nITERATION 1 : \n\tbeg --> 01\n\tmid --> 04\n\tend --> 10\n\n");
    //array
    boldyellow();
    printf(" Beg             Mid           End\n");
    red();
    printf(" ____ ____ ____ ____ ____ ____ ____\n");
    printf("|    |    |    |    |    |    |    |\n");
    boldyellow();
    printf("  01   02   03   ");
    cyan();
    printf("04   ");
    boldyellow();
    printf("05   07   10\n");
    red();   
    printf("|____|____|____|____|____|____|____|\n");
    boldyellow();
    printf("  0    1    2    3    4     5    6\n\n");

    delay();
    //chk
    printf("Checking if mid and required element are same..\n");
    red();
    printf(" ____      ____ \n");
    printf("|    |    |    |\n");
    boldyellow();
    printf("  04   !=   10\n");
    red();
    printf("|____|    |____|\n");
    boldyellow();

    delay();
    printf("\nChecking if mid is less than or greater than required element..\n");
    red();
    printf(" ____      ____ \n");
    printf("|    |    |    |\n");
    boldyellow();
    printf("  04    <   10\n");
    red();
    printf("|____|    |____|\n");
    
    delay();
    //iteration 2
    white();
    printf("\n\nITERATION 2");
    printf("\n\nSince, required element is lying in between end and mid..\n\tbeg --> 05\n\tmid --> 07\n\tend --> 10\n\n");
    
    //array
    boldyellow();
    printf("                      Beg  Mid  End\n");
    red();
    printf(" ____ ____ ____ ____ ____ ____ ____\n");
    printf("|    |    |    |    |    |    |    |\n");
    liteyellow();
    printf("  01   02   03   04   ");
    boldyellow();
    printf("05   ");
    cyan();
    printf("07   ");
    boldyellow();
    printf("10\n");
    red();   
    printf("|____|____|____|____|____|____|____|\n");
    boldyellow();
    printf("  0    1    2    3    4     5    6\n\n");

    delay();
    //chk
     printf("Checking if mid and required element are same..\n");
    red();
    printf(" ____      ____ \n");
    printf("|    |    |    |\n");
    boldyellow();
    printf("  07   !=   10\n");
    red();
    printf("|____|    |____|\n");
    boldyellow();

    delay();
    printf("\nChecking if mid is less than or greater than required element..\n");
    red();
    printf(" ____      ____ \n");
    printf("|    |    |    |\n");
    boldyellow();
    printf("  07    <   10\n");
    red();
    printf("|____|    |____|\n");
    
    delay();
    //iteration 3
    white();
    printf("\n\nITERATION 3");
    printf("\n\nSince, beg and end are same element...\n\tbeg --> 10\n\tmid --> 10\n\tend --> 10\n\n");
    
    //array
    red();
    printf(" ____ ____ ____ ____ ____ ____ ____\n");
    printf("|    |    |    |    |    |    |    |\n");
    liteyellow();
    printf("  01   02   03   04   05   07   ");
    cyan();   
    printf("10\n");
    red();   
    printf("|____|____|____|____|____|____|____|\n");
    boldyellow();
    printf("  0    1    2    3    4     5    6\n\n");

    delay();
    //chk
     printf("Checking if mid and required element are same..\n");
    red();
    printf(" ____      ____ \n");
    printf("|    |    |    |\n");
    boldyellow();
    printf("  10   ==   10\n");
    red();
    printf("|____|    |____|\n");
    
    delay();
    white();
    printf("\n\nRequired element 10 found in the INDEX : 6\n\n");  
    boldyellow();
    topicheader1(); topicheader1(); 
    
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
  int n, ele;
  printf("\n\nNOW IT'S YOUR TURN !!!\n\nEnter the size of array : \n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of array (sorted): \n");
  for (int i =0; i<n; i++)
      scanf("%d",&arr[i]);
  printf("Enter the element to be searched : \n");
  scanf("%d",&ele);
  printf("\n\n");
  bin_search(arr,n,ele);
  printf("\n\n");
  boldyellow();
  topicheader1(); topicheader();
}

void bsearchmain()
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