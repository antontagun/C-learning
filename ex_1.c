#include <stdio.h>

void numerical_order(void)
{
    int num, n = 0;
        scanf("%d", &num);
        do
        {   
            n++;
            printf("%d\n", n);
        }
        while(num--);
}

void sum_odd(void)
{
    int num, n = 0;
    scanf("%d", &num);
    do
    {  
        if(num % 2 != 0)
        {
            n += num;
        } 
    }
    while(num--);
    printf("%d\n", n);
}

void sum_even(void)
{
        int num, n = 0;
    scanf("%d", &num);
    do
    {  
        if(num % 2 == 0)
        {
            n += num;
        }
    }
    while(num--);
    printf("%d\n", n);
}

int main(void)
{
    numerical_order();
    sum_odd();
    sum_even();
    return 0;

}