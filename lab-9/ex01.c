#include<stdio.h>
#define pi 3.14

float Circle(int rad){
    float Area = 0;
    Area = pi * rad * rad;
    return Area;
}

float Circum(int rad){
    float circum = 0;
    circum = 2.0 * pi * rad;
    return circum;
}


int main()
{
    int radius;
    printf("Enter the radius in cm: ");
    scanf("%d", &radius);
    printf("Circumference: %.2f\n", (float) Circum(radius));
    printf("Area: %.2f\n", Circle(radius));
    return 0;
}
