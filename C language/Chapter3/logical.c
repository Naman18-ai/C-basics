#include <stdio.h>

int main(){
    int a;
    int vip=1;
    printf("Enter your are age");
    scanf("%d", &a);
    if((a>=70 && a<18)||vip==1){//------> "|| stands for or","&&" stand for and, "!" stands for not
        printf("You can't drive\n");

    }else{
        printf("you can drive!");
    }
return 0;
}