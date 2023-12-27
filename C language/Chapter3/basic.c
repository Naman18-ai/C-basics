//program to check whether a program is even or odd
#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a number\n"); scanf("%d", &a);
    if(a%2==0){
        printf("The number is even\n");

    }
    else{
        printf("The number is odd");
    }
return 0;
}