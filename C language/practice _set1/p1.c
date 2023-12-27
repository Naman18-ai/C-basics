// write a program to calculate the area of a rectangle
#include <stdio.h>
int main()
{
    int length, width;
    printf("Enter the length of the rectangle");
    scanf("%d", &length);
    printf("Enter the width of the rectangle");
    scanf("%d", &width);
    int area = length * width;
    printf("The area of the rectangle is %d", area);

    return 0;
}