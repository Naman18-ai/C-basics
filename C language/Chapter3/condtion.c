// write a program which tells a person he/she is eligible to drive or not, record their name as input
#include <stdio.h>

int main()
{
    
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);
     
    if(age>=18){
        printf("You are eligible to drive ");


    }
    else{
        printf("You are underage  ");
    }
    return 0;
}