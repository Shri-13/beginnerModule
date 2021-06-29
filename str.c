void window()
{
    int i;
    int down=10,left=31,right=111;
   boldyellow();
    for(i=left;i<=61;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }

    printf("   STRUCTURE");
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

    gotoxy(58,13);  printf("[1] What is Structure ?");
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
    printf(" WHAT IS STRUCTURE ? ");
    topicheader();
    green();
    printf("\n\n\t\t\tA struct (or structure) is a collection of variables (can be of different types) under a single name.\n\t\t\tThe struct statement defines a new data type, with more than one member.\n\n\n");

printf("\n\t\t\tStructures are used to represent a record. Suppose you want to keep track of your books in a library.\n\t\t\tYou might want to track the following attributes about each book \n\t\t\t\t\t-->Title\n\t\t\t\t\t-->Author\n\t\t\t\t\t-->Subject\n\t\t\t\t\t-->Book ID\n");

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
    codeprinter("structcode.c");
    printf("\n\n");
    red();
    topicheader1();
    topicheader1();

}
