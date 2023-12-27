// write a program to calculate the factorial of a given number
#include <stdio.h>

int main()
{
    int num;
    int i;
    int fact = 1;
    printf("Enter the number you want factorial of\n");
    scanf("%d", &num);
    // #### USING FOR LOOPS ####
    // for (int i =  num; i; i--)
    // {
    //     fact *= i;
    // }
    // #### USING WHILE LOOPS ####
    i =num;
    while (i > 0)
    {
        fact *= i;
        i--;
    }

    printf("factorial = %d \n", fact);

    return 0;
}