#include <stdio.h>
#include <math.h>
#define f(x) pow(x,3) -2*x-5

int main()
{
    float x1,x2,x3,y1,y2,error;
    error = 0.001;

    printf("Enter initial guess (x1, x2) : ");
    scanf("%f %f", &x1,&x2);
    while(1)
    {
        y1 = f(x1);
        y2 = f(x2);

        x3 = (x1*y2-x2*y1)/(y2-y1);
        if(fabs(x3-x2)<error)
            break;
        x1=x2;
        x2=x3;
    }

    printf("The root is %.3f",x3);
}

