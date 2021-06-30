void window()
{
    int i;
    int down=10,left=31,right=111;
   boldyellow();
    for(i=left;i<=61;i++)
    {
        gotoxy(i,down);printf("\xB2");
    }

    printf(" ARRAYS ");
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

    gotoxy(58,13);  printf("[1] What is an Array ?");
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
    printf(" WHAT IS AN ARRAY ? ");
    topicheader();
    green();
    printf("\n\n\t\t\tAn array is a collection of similar data items stored at contiguous memory locations and elements can be accessed randomly using indices of an array.\n\t\t\tThey can be used to store collection of primitive data types such as int, float, double, char, etc of any particular type.\n\t\t\tAll arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.\n\n\t\t\tSyntax: type arrayName [ arraySize ];");
    printf("\n\n\t\t\t2D array:\n\t\t\tThe two-dimensional array can be defined as an array of arrays. The 2D array is organized as matrices which can be represented as the collection of rows and columns.\n\t\t\tHowever, 2D arrays are created to implement a relational database lookalike data structure.\n\t\t\tIt provides ease of holding the bulk of data at once which can be passed to any number of functions wherever required.");
    printf("\n\n\t\t\tSyntax: data_type array_name[rows][columns];");
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
    codeprinter("arraycode.c");
    printf("\n\n");
    red();
    topicheader1();
    topicheader1();

}
