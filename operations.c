#include <stdio.h>
#include <math.h>
void square_equation(void)
{
    float f_a, f_b, f_c;
    printf("Enter the coefficient a = ");
    scanf("%f", &f_a);
    printf("Enter the coefficient b = ");
    scanf("%f", &f_b);
    printf("Enter a free member c = ");
    scanf("%f", &f_c);
    printf("equation: %f*x^2  %+f*x  %+f\n", f_a, f_b, f_c);
    float f_d = pow(f_b, 2) - 4 * f_a * f_c;
    if(f_d == 0)
    {
        printf("The equation has one root %f\n", -f_b / 2 * f_a);
    }
    else if(f_d > 0)
    {
        printf("The equation has two root %f and % f\n", (-f_b + sqrt(f_d))/ 2 * f_a, (-f_b - sqrt(f_d))/ 2 * f_a);
    }
    else
    {
        printf("The equation has not solution\n");
    }

}   
void sum(void)
{
    int num_1, num_2;
    printf("please, enter two numbers\n");
    scanf("%d", &num_1);
    scanf("%d", &num_2);
    printf("%d + %d = %d\n", num_1, num_2, num_1 + num_2);
    if(num_1 == num_2)
    {
        printf("%d = %d", num_1, num_2);
    }
    else if(num_1 < num_2)
    {
        printf("%d < %d", num_1, num_2);
    }
    else
    {
        printf("%d > %d", num_1, num_2);
    }

}
int main(void)
{   
    int num;
    printf("Write the number of equations \n");
    scanf("%d", &num);
    do
    { 
        square_equation();
    }
    while(--num);

        
    //sum();
    return 0;
}
