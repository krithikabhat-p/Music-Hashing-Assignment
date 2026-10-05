#include <stdio.h>

#define SIZE 10
#define N 8

int hashFunction(int key)
{
    return key % SIZE;
}

void display(int table[])
{
    int i;

    printf("\nIndex : ");
    for (i = 0; i < SIZE; i++)
        printf("%4d", i);

    printf("\nValue : ");
    for (i = 0; i < SIZE; i++)
    {
        if (table[i] == -1)
            printf("%4s", "-");
        else
            printf("%4d", table[i]);
    }

    printf("\n");
}

int main()
{
    int songIDs[N] = {105, 210, 315, 420,
                      525, 630, 735, 840};

    int table[SIZE];
    int i, index, start;
    int collisions = 0;

    for (i = 0; i < SIZE; i++)
        table[i] = -1;

    printf("HASH TABLE - DIVISION METHOD\n");
    printf("============================\n");

    for (i = 0; i < N; i++)
    {
        index = hashFunction(songIDs[i]);
        start = index;

        printf("\nInserting %d\n", songIDs[i]);
        printf("Hash value = %d\n", index);

        while (table[index] != -1)
        {
            printf("Collision at index %d\n", index);
            collisions++;

            index = (index + 1) % SIZE;

            if (index == start)
            {
                printf("Table is full.\n");
                return 0;
            }
        }

        table[index] = songIDs[i];

        printf("Inserted at index %d\n", index);

        display(table);
    }

    printf("\nTotal collisions = %d\n", collisions);

    return 0;
}
