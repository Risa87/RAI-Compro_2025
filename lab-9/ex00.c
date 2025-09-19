#include<stdio.h>
#include<math.h>

float TriangleArea(float,float,float);

int main()
{
    float = a,b,c,area;
    printf("Enter three side of triangle: ");
    scanf("%f,%f,%f", &a, &b, &c);
    area = TriangleArea(a,b,c);
    printf("Area of triangle = %.2f\n", area);

    return 0;
}

float TriangleArea(float a,float b,float c) {
    float s = (a+b+c)/2.0;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return(area);
}
