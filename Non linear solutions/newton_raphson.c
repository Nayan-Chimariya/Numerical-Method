#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define f(x) 3*x-cos(x)-1
#define g(x) 3 + sin(x)

int main()
{
    float x1, y1, y2, x2, error;

    printf("Enter initial guess : ");
    scanf("%f",&x1);
    error = 0.001;

    while(1)
    {
        y1 = f(x1);
        y2 = g(x1);

        x2 = x1 - (y1/y2);
         if(fabs((x2-x1)/x1) < error)
            break;
        x1=x2;
    }
    printf("-> The root is %.3f ",x2);
    return 0;
}
