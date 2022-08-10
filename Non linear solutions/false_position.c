#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) cos(x) - x*exp(x)

int main()
{
    float x0,x1,x2,y0,y1,y2,error;
    error = 0.001;
    while(1)
    {
        printf("Enter initial guesses x1 and x2: ");
        scanf("%f%f",&x1,&x2);
        if(f(x1)*f(x2)<0)
            break;
        else
            printf("The guess does not bracket the root\n");
    }

    while(1)
    {
        y1=f(x1);
        y2=f(x2);
        x0 = (x1*y2-x2*y1)/(y2-y1);

        if(fabs(f(x0))<error)
            break;

        if(f(x0)>0)
            x2=x0;
        else
            x1=x0;
    }
    printf("%.3f",x0);

}
