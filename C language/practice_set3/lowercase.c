//write a program to check wether a character entered by the user is lowercase or uppercase
#include <stdio.h>

int main(){
    //97-122
    char usr;
    printf("Enter the character\n");
    scanf("%c", &usr);
    if(usr>=97 && usr<=122){
        printf("it is lowercase");
    }
    else{
        printf("It is not lowercase");
    }


return 0;
}