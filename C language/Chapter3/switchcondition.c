#include <stdio.h>

int main()
{
    int rating;
    printf("Enter you rating(1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {
        case 1:
        printf("You rated 1\n");
        
        case 2:
        printf("you rated 2\n");
        break;
        case 3:
        printf("you rated 3\n");
        break;
        case 4:
        printf("you rated 4\n");
        break;
        case 5:
        printf("You rated 5\n");
        break;
        default:
        printf("Invalid rating\n");
        break;
      
    }
    return 0;
}