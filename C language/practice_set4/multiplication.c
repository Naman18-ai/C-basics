// write a program to give the multiplication table for a number 'n'
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        printf(" %d * %d = %d\n",n,i,n*i );
    }
    

return 0;
}