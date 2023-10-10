#include <stdio.h>
#include <limits.h>

int main(void) 
{
    int i = 100;
    short s = -128;
    printf("size of char = %lu\n",sizeof(char));
    printf("signed char range is [%d,%d]\n", CHAR_MIN, CHAR_MAX);

    printf("size of short = %lu\n",sizeof(short int));
    printf("signed short range is [%d,%d]\n", SHRT_MIN, SHRT_MAX);

    printf("size of int = %lu\n",sizeof(int));
    printf("signed int range is [%d,%d]\n", INT_MIN, INT_MAX);

    printf("size of long = %lu\n",sizeof(long int));
    printf("signed long range is [%d,%d]\n", LONG_MIN, LONG_MAX);

    printf("size of long long = %lu\n",sizeof(long long int));
    printf("signed long long range is [%lld,%lld]\n", LLONG_MIN, LLONG_MAX);


    printf("size of unsigned char = %lu\n",sizeof(unsigned char));
    printf("unsigned char range is [%x,%x]\n", 0, UCHAR_MAX);

    printf("size of unsigned short = %lu\n",sizeof(unsigned short int));
    printf("unsigned short range is [%x,%x]\n", 0, USHRT_MAX);

    printf("size of unsigned int = %lu\n",sizeof(unsigned int));
    printf("unsigned int range is [%u,%u]\n", 0, UINT_MAX);

    printf("size of unsigned long = %lu\n",sizeof(unsigned long int));
    printf("unsigned long range is [%x,%x]\n", 0, ULONG_MAX);

    printf("size of unsigned long long = %lu\n",sizeof(unsigned long long int));
    printf("unsigned long long range is [%u,%llu]\n", 0, ULLONG_MAX);


    printf("size of float = %lu\n",sizeof(float));
    printf("size of double = %lu\n",sizeof(double));
    printf("size of long double = %lu\n",sizeof(long double));

    return 0;
}