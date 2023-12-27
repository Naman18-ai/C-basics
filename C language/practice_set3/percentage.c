// Write a program to find out wehter a student is pass or fail, it is requires total 40% and at least 33% 
// in each subject to pass. Assume 3 subjects and take the marks as an input from the user
#include <stdio.h>

int main(){
    int maths;
    int chemistry;
    int physics;
    float total;

    printf("Enter you marks in maths\n");
    scanf("%d", &maths);
    printf("Enter you marks in chemistry\n");
    scanf("%d", &chemistry);
    printf("Enter you marks in physics\n");
    scanf("%d", &physics);
    total = (physics + maths + chemistry)/3;
    if((total<40) || physics < 33 || maths<33 || chemistry<33){
        printf("You failed, your percentage is %f", total);

    }
    else{
        printf("you passed with a precentage of %f", total);
    }

return 0;
}