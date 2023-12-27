// write  a program to print the sum of the numbers occuring in the multiplication table
// from 1 to 0[8x1 --> 8x10]
#include <stdio.h>

int main()
{
    int i = 0;
    int n = 8;
    int sum = 0;
    int mul;
    for (i = 0; i <= 10; i++)
    {
        mul = n * i;
        sum += mul;
    }
    printf("THe sum is %d \n", sum);

    return 0;
}