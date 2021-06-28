#include<stdio.h>
#include<stdlib.h>
#include "binarysearch.c"
//#include "delay.c"
int main()
{
    char ch;
    int choice;
    
    do
    {
        system("cls");
        printf("\n\n********************************** MAIN MENU ********************************\n\n");
        printf("\t[1] Basics\n\t[2] Control Statements\n\t[3] Arrays\n\t[4] Strings\n\t[5] Pointers\n\t[6] Structures\n\t[7] Unions\n\t[8] Search (Binary Search)\n\t[9] Sorting\n\t[10] Exit\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: //basicfunc
                    break;
            case 2: //controlst
                    break;
            case 3: //arrays
                    break;
            case 4: //arrays
                    break;
            case 5: //arrays
                    break;
            case 6: //arrays
                    break;
            case 7: //arrays
                    break;
            case 8: bsearchmain();
                    break;
            case 9: //visualRep();
                    break;
            case 10: //arrays
                    break;
            default : printf("Sorry! You've entered a wrong choice");
                      break;            
        }
        printf("\nDo you wanna exit from main menu (y/n) : ");
        fflush(stdin);   
        scanf("%c",&ch);
    } while (ch == 'n');
    return 0;
}
    

    