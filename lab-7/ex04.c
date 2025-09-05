#include<stdio.h>
int main()
{
    struct Vector{
    float x;
    float y;
    };

    struct Vector u,v,res;
    printf("u_x:");
    scanf("%f",&u.x);
    printf("u_y:");
    scanf("%f",&u.y);
    printf("v_x:");
    scanf("%f",&v.x);
    printf("v_y:");
    scanf("%f",&v.y);

    res.x = u.x + v.x;
    res.y = u.y + v.y;

    printf("Resultant vector is equivaience to %.1fi + %.1fj\n", res.x,res.y);
    return 0;
}