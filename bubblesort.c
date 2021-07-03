void window()
{
    int i;
    int down=10,left=31,right=111;
   boldyellow();
    for(i=left;i<=61;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }

    printf(" BUBBLE SORT ");
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

    gotoxy(58,13);  printf("[1] What is Bubble Sort ?");
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
    printf(" WHAT IS BUBBLE SORT ? ");
    topicheader();
    green();
    printf("\n\n\t\t\tBubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.");
    printf("\n\n\t\t\tAlgorithm:\n\t\t\tTo sort an array of size n in ascending order:\n\t\t\t1:Starting with the first element(index = 0), compare the current element with the next element of the array.\n\t\t\t2:If the current element is greater than the next element of the array, swap them.\n\t\t\t3:If the current element is less than the next element, move to the next element. Repeat Step 1.\n\t\t\t");
    printf("\n\n\t\t\tComplexity:\n\t\t\t->When the list is already sorted (best-case), the complexity of bubble sort is only O(n).\n\t\t\t->Time complexity of O(n^2) in the average and worst cases\n\t\t\t");
    cyan();
    topicheader1();
    topicheader1();
}
