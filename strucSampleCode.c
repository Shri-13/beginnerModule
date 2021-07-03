#include <stdio.h>
#include <string.h>
 
struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
void strucExecution(char titlein[50], char authorin[50], char subjectin[100], int book_idin, char titlein2[50], char authorin2[50], char subjectin2[100], int book_idin2) {

   struct Books Book1;        /* Declare Book1 of type Book */
   struct Books Book2;        /* Declare Book2 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, titlein);
   strcpy( Book1.author, authorin);
   strcpy( Book1.subject, subjectin);
   Book1.book_id = book_idin;

   /* book 2 specification */
   strcpy( Book2.title, titlein2);
   strcpy( Book2.author, authorin2);
   strcpy( Book2.subject, subjectin2);
   Book2.book_id = book_idin2;
 
   /* print Book1 info */
   printf( "\nBook 1 title : %s", Book1.title);
   printf( "Book 1 author : %s", Book1.author);
   printf( "Book 1 subject : %s", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);

   /* print Book2 info */
   printf( "\nBook 2 title : %s", Book2.title);
   printf( "Book 2 author : %s", Book2.author);
   printf( "Book 2 subject : %s", Book2.subject);
   printf( "Book 2 book_id : %d\n", Book2.book_id);

}