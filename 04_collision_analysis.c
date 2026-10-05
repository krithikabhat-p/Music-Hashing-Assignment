#include <stdio.h>

#define SIZE 10

int hashFunction(int key)
{
    return key % SIZE;
}

int main()
{
    int songIDs[] =
    {
        105, 210, 315, 420,
        525, 630, 735, 840
    };

    int n = 8;

    int table[SIZE];
    int i, index, start;
    int collisions = 0;

    for (i = 0; i < SIZE; i++)
        table[i] = -1;

    printf("COLLISION ANALYSIS\n");
    printf("==================\n");

    for (i = 0; i < n; i++)
    {
        index = hashFunction(songIDs[i]);
        start = index;

        while (table[index] != -1)
        {
            collisions++;

            index = (index + 1) % SIZE;

            if (index == start)
            {
                printf("Table is full.\n");
                return 0;
            }
        }

        table[index] = songIDs[i];
    }

    printf("Number of elements = %d\n", n);
    printf("Table size = %d\n", SIZE);
    printf("Total collisions = %d\n", collisions);

    printf("\nLoad Factor:\n");

    printf("alpha = n / m\n");
    printf("      = %d / %d\n", n, SIZE);
    printf("      = %.2f\n", (float)n / SIZE);

    printf("\nComplexity:\n");
    printf("Hashing Average Case  : O(1)\n");
    printf("Hashing Worst Case    : O(n)\n");
    printf("Linear Search Average : O(n)\n");
    printf("Linear Search Worst   : O(n)\n");

    return 0;
}
