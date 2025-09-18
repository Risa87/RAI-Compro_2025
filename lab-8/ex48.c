#include<stdio.h>
#include<string.h>

int main(){
    int A[3][3];
    int *p = &A[0][0];
    int total = 3 * 3;

    for(int i=0; i<total; ++i){
        *(p+i) = i+1;
    }

    printf("Exercise1:3x3\n");
    for(int r=0; r<3; ++r){
        for(int c=0; c<3; ++c){
            printf("%3d", *(&A[0][0]+r*3+c));
        }
        printf("\n");
    }

    
    void swap_float(float*x,float*y)
   {
    float tmp=*x;
     *x=*y;
     *y=tmp;
   }
    float x=12.5f, y=-4.0f;
       printf("Exercise2:swap floats via pointers\n");
       printf("Before:x=%.2f, y=%.2f\n", x,y);
       swap_float(&x,&y);
       printf("After:x=%.2f, y=%.2f\n\n", x,y);


    struct S{
    int a,b,c;
    };
        struct S s={.a=7,.b=15,.c=0};
        struct S*sp=&s;

        sp->c = sp->a + sp->b;

        printf("Exercise3:struct sum via pointer\n");
        printf("a=%d,b=%d,c=a+b=%d\n\n", sp->a,sp->b,sp->c);
    
        return 0;
}



