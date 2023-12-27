// write a program to check whether a number is divisible by 97 or not
#include <stdio.h>

int main()
{
    int num;
    printf("ENter the number\n");
    scanf("%d", &num);
    printf("The divisibility test is %d ", num%97);
    //basically it gives out the remainder
    return 0;
}