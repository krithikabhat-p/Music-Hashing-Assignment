#include <stdio.h>

#define SIZE 10

int hashFunction(int key)
{
    return key % SIZE;
}

int hashSearch(int table[], int key, int *comparisons)
{
    int index = hashFunction(key);
    int start = index;

    *comparisons = 0;

    while (table[index] != -1)
    {
        (*comparisons)++;

        if (table[index] == key)
            return index;

        index = (index + 1) % SIZE;

        if (index == start)
            return -1;
    }

    (*comparisons)++;

    return -1;
}

int main()
{
    int table[SIZE] =
    {
        210, 420, 630, 840, -1,
        105, 315, 525, 735, -1
    };

    int keys[] = {315, 840, 999};
    int n = 3;

    int i, position, comparisons;

    printf("HASHING SEARCH\n");
    printf("==============\n");

    for (i = 0; i < n; i++)
    {
        position = hashSearch(
            table,
            keys[i],
            &comparisons
        );

        if (position != -1)
        {
            printf("\nKey: %d\n", keys[i]);
            printf("Found at index: %d\n", position);
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
