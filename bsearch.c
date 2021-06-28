#include <stdio.h>

void bin_search(int arr[], int n, int x)
{
/* LAST INDEX */

    int end = n;


/* FIRST INDEX */

    int beg = 0;


/* POS VARIABLE TO STORE THE INDEX OF SEARCHED ELEMENT */

    int pos = -1;


/* ITERATION METHOD */

    while (beg <= end)
    {
        int mid = beg + (end - beg) / 2;

    /* CHECK IF X IS PRESENT AT MID */

        if (arr[mid] == x)
            pos = mid;


    /* IF X IS GREATER , IGNORE LEFT HALF */

        if (arr[mid] < x)
            beg = mid + 1;


    /* IF X IS SMALLER, IGNORE RIGHT HALF */

        else
            end = mid - 1;
    }
    if (pos == -1)
        printf("Element not found!");
    else
        printf("The element %d is present at INDEX : %d", x, pos);
}
