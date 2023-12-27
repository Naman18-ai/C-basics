#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number;
    int guess;
    int nguess = 1;
    srand(time(0));
    number =rand()%100+1;  //generated a random number between 0 to 100
    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("It is a little higher\n");

        }else if (number>guess){
            printf("Higher number please\n");
        }
        else{
            printf("You guess is right\n The total number of guess is %d", nguess);
        }
        nguess++;

    } while (number!=guess);

return 0;
}