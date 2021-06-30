//1D ARRAY CODE
#include <stdio.h>

int main () {

   int n[ 10 ]; /* n is an array of 10 integers */
   int i,j;

   /* initialize elements of array n to 0 */
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }

   /* output each array element's value */
   for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }

   return 0;
}
*************************************************************************************************
//2D ARRAY CODE
#include <stdio.h>
void main ()
{
//INITIALIZING 2D-ARRAY

 int arr[3][3],i,j;

//STORING ELEMENTS IN 2D-ARRAY

for (i=0;i<3;i++)

    {

        for (j=0;j<3;j++)
        {

            printf("Enter a[%d][%d]: ",i,j);

            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n printing the elements ....\n");

//PRINTING ELEMENTS FROM 2D ARRAY

for(i=0;i<3;i++)
    {

        printf("\n");

        for (j=0;j<3;j++)
        {

            printf("%d\t",arr[i][j]);

        }
    }
}

