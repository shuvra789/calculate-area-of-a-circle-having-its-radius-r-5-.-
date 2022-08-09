//Write a program to calculate area of a circle having its radius (r = 5).
#include<stdio.h>
 int main(void)
 {
    float r, Area;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    Area = 3.14*r*r;
    printf("the area of the circle is %f\n",Area);
   return 0;
}

