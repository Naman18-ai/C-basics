// write a program to calculate the surface area of a circle and modify the same program to
// calculate the volume of a cylinder, given it's radius and height

#include <stdio.h>
int main()
{
    int height = 20;
    int radius = 10;
    float pi = 3.14;

    float volume = pi * pi * height;
    float area_of_cricle = pi * radius * radius;
    printf("The area of the circle is %f\n", area_of_cricle);
    printf("The volume of the cylinder is %f\n", volume);
    return 0;
}