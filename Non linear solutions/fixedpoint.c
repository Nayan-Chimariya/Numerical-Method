#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) (pow(x,2)+2)/3

int main()
{
    float x, y, error;
    error = 0.001;

    printf("Enter initial guess x: ");
    scanf("%f",&x);

    while(1)
    {
        y=f(x);
        if(fabs(x-y)<error)
            break;
        x=y;

    }
    printf("%.3f",y);

}

