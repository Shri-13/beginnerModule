void window()
{
    int i;
    int down=10,left=31,right=111;
   boldyellow();
    for(i=left;i<=61;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }

    printf(" INSERTION SORT ");
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

    gotoxy(58,13);  printf("[1] What is Insertion Sort ?");
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
    printf(" WHAT IS INSERTION SORT ? ");
    topicheader();
    green();
    printf("\n\n\t\t\tInsertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands.\n\t\t\tThe array is virtually split into a sorted and an unsorted part.\n\t\t\tValues from the unsorted part are picked and placed at the correct position in the sorted part.");
    printf("\n\n\t\t\tAlgorithm:\n\t\t\tTo sort an array of size n in ascending order:\n\t\t\t1: Iterate from arr[1] to arr[n] over the array.\n\t\t\t2: Compare the current element (key) to its predecessor.\n\t\t\t3: If the key element is smaller than its predecessor, compare it to the elements before.\n\t\t\tMove the greater elements one position up to make space for the swapped element.");
    printf("\n\n\t\t\tComplexity:\n\t\t\t->The best case input is an array that is already sorted. In this case insertion sort has a linear running time (i.e., O(n))\n\t\t\t->The simplest worst case input is an array sorted in reverse order.This gives insertion sort a quadratic running time (i.e., O(n2)).");
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
    codeprinter("insertionsortcode.c");
    printf("\n\n");
    red();
    topicheader1();
    topicheader1();

}
