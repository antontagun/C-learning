#include <stdio.h>
#include <time.h>

#define TOTAL_SIZE     13

void fill_array_randomly(int array[], const int size)
{
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand();
    }
}

void print_array(int array[], const int size)
{
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(void)
{
    const int size_of_array_1 = 7;
    int array_1[size_of_array_1];
    int array_2[TOTAL_SIZE];
    int array_3[] = {1, 2, 3};
    srand(time(NULL));   // Initialization, should only be called once.
    for(int i = 0; i < TOTAL_SIZE; ++i)
    {
        array_2[i] = 0;
    }
    printf("%d\n", sizeof(array_2) / sizeof(array_2[0]));
    fill_array_randomly(array_3, sizeof(array_3) / sizeof(array_3[0]));
    print_array(array_3, sizeof(array_3) / sizeof(array_3[0]));
    return 0;
}