#include <stdio.h>

#define N 8

int linearSearch(int a[], int n, int key, int *comparisons)
{
    int i;

    *comparisons = 0;

    for (i = 0; i < n; i++)
    {
        (*comparisons)++;

        if (a[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int songIDs[N] =
    {
        105, 210, 315, 420,
        525, 630, 735, 840
    };

    int keys[] = {315, 840, 999};
    int n = 3;

    int i, position, comparisons;

    printf("LINEAR SEARCH\n");
    printf("=============\n");

    for (i = 0; i < n; i++)
    {
        position = linearSearch(
            songIDs,
            N,
            keys[i],
            &comparisons
        );

        if (position != -1)
        {
            printf("\nKey: %d\n", keys[i]);
            printf("Found at position: %d\n", position);
            printf("Comparisons: %d\n", comparisons);
        }
        else
        {
            printf("\nKey: %d\n", keys[i]);
            printf("Not found\n");
            printf("Comparisons: %d\n", comparisons);
        }
    }

    return 0;
}
