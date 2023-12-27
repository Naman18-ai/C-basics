//write a programm for priniting sum of first n natural numbers using while loops, do-while loops and
// for loops
#include <stdio.h>

int main(){
    int i=0;
    int sum = 0;
    int n;
    printf("Enter the range for the numbers\n");
    scanf("%d", &n);
    // #### USING WHILE LOOPS####
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // printf("Sum = %d \n", sum);

    //#### USING FOR LOOPS####

    // for(i;i<=n;i++){
    //     sum+=i;
    // }
    // printf("Sum = %d \n",sum);
    
    // #### USING DO WHILE####

    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    printf("Sum = %d \n", sum);
    
    
return 0;
}