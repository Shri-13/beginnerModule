#include <stdio.h>
int main()
{
  //ARRAY INITIALIZED
  int array[100], search, c, n;

  //GETTING SIZE OF ARRAY
  printf("Enter number of elements in array\n");

  scanf("%d", &n);
  //GETTING ELEMENTS OF ARRAY FROM USER
  printf("Enter %d integer(s)\n", n);

  for (c = 0; c < n; c++)

    scanf("%d", &array[c]);
  //GETTING ELEMENT TO BE SEARCHED
  printf("Enter a number to search\n");

  scanf("%d", &search);
  // COMPARING SEARCH ELEMENT WITH EACH ELEMENT
  for (c = 0; c < n; c++)

  {
    if (array[c] == search)    /* If required element is found location is printed */
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }

  if (c == n)

    printf("%d isn't present in the array.\n", search);

  return 0;
}

