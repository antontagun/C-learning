#include <stdio.h>
#include <time.h>

void binary_system(int dev, int num)
{   
    int rem;
    const int max_digits = 1000;
    int array[max_digits];
    int i = 0;
    do
    {   
        rem = num  % dev;
        num = num / dev;
        // printf("%d, %d", num, rem);
        
        array[i] = rem;

        i++;
    } 
    while (num > 0);
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", array[j]);
    }
    
    printf("\n");
}

int main(void)
{
    int dev;
    int num;
    printf("System: ");
    scanf("%d", &dev);
    printf("Enter the number: ");
    scanf("%d", &num);
    binary_system(dev, num);

    return 0;
}

