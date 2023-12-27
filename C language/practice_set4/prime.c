//write a program to check wether a program is prime of not
#include <stdio.h>

int main(){
    int i;
    int num;
    int rime=0;
    printf("Enter the number you want to check \n");
    scanf("%d", &num);
    for(i = 2;i<=num;i++){
        if(num%i == 0){
            rime = 1;
            break;
        }
    }
    if(rime == 0){
        printf("It is not aprime number\n");


    }
    else{
        printf("This is  a prime number\n");
    } 

   
    
return 0;
}