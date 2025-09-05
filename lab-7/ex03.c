#include<stdio.h>
#include<math.h>

int main()
{
    struct min{
    float x;
    float y;
        
    }; 
    struct min point1,point2;
    printf("x1:");
    scanf("%f",&point1.x);
    printf("y1:");
    scanf("%f",&point1.y);
    printf("x2:");
    scanf("%f",&point2.x);
    printf("y2:");
    scanf("%f",&point2.y);

    float disx = point2.x - point1.x ;
    float disy = point2.y - point1.y ;
    float disall = sqrt((disx * disx) + (disy * disy));

    printf("Distance between (%.2f,%.2f)and(%.2f,%.2f)is %.3f unit(s)",point1.x,point1.y,point2.x,point2.y,disall);

    return 0;
}