#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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

int max_el(int array[], const unsigned int size)
{
    if(size == 0)
    {
        return __INT_MAX__;
    }
    int pr_el = array[0];
    for(int i = 0; i < size; ++i)
    {
        if(array[i] > pr_el)
        {
            pr_el = array[i];
        }
    }
    return pr_el;
    
}

int min_el(int array[], const unsigned int size)
{
    if(size == 0)
    {
        return __INT_MAX__;
    }

    int pr_el = array[0];
    for(int i = 0; i < size; ++i)
    {
        if(array[i] < pr_el)
        {
            pr_el = array[i];
        }
    }
    return pr_el;
}

void filling_el(int array[], const int size, int a, int b)
{
    if(a == b)
    {
        for(int i = 0; i < size; ++i)
        {
            array[i] = a;
        }
        return ;
    }
    if(a > b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
    int len = b - a;
    //len = len > 0 ? len : -len; 
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand() % len + a;
    }
}


int main(void)
{
    int array_3[] = {1, 2, 3};
    int a, b;
    const int max_len = 100;
    int array_1[max_len];

    srand(time(NULL));

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);
    
    printf("rand max = %d\n", RAND_MAX);

    fill_array_randomly(array_1, sizeof(array_1) / sizeof(array_1[0]));
    print_array(array_1, sizeof(array_1) / sizeof(array_1[0]));

    printf("min_el = %d\n", min_el(array_1, sizeof(array_1) / sizeof(array_1[0])));
    printf("max_el = %d\n", max_el(array_1, sizeof(array_1) / sizeof(array_1[0])));
    
    filling_el(array_1, sizeof(array_1) / sizeof(array_1[0]), a, b);
    print_array(array_1, sizeof(array_1) / sizeof(array_1[0]));

    printf("min_el = %d\n", min_el(array_1, sizeof(array_1) / sizeof(array_1[0])));
    printf("max_el = %d\n", max_el(array_1, sizeof(array_1) / sizeof(array_1[0])));

    return 0;
}