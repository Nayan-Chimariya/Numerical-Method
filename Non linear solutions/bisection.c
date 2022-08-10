#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x0,x1,x2,y0,y1,y2,error,root, temp;
    error = 0;
    int n=1;
    while(1)
    {
        printf("Guess two points that bracket the root: ");
        scanf("%f%f",&x1,&x2);
        y1 = pow(x1,3)-2*x1-5;
        y2 = pow(x2,3)-2*x2-5;
        if(y1*y2 > 0)
            printf("\n-> The guess do not bracket the root\n\n");
        else
            break;
    }

    printf("\n  N \t X1\t  X2\t  X0\t  f(x0)\n _______________________________________\n");
    while(1)
    {
        x0 = (x1+x2)/2;
        if(x0-temp == error)
        {
            root = x0;
            break;
        }
        n++;
        y0 = pow(x0,3)-2*x0-5;
        if(y0 == 0)
            root = x0;
        else
        {
            if(y0*x1<0)
                x1=x0;
            else
                x2=x0;
        }
        temp = x0;

        if (n<=9)
        {
            if(y0<0)
                printf("| %d | %.4f | %.4f | %.4f | %.4f|\n",n,x1,x2,x0,y0);
            else
                printf("| %d | %.4f | %.4f | %.4f | %.4f |\n",n,x1,x2,x0,y0);
        }
        else
        {
            if(y0<0)
                printf("| %d| %.4f | %.4f | %.4f | %.4f|\n",n,x1,x2,x0,y0);
            else
                printf("| %d| %.4f | %.4f | %.4f | %.4f |\n",n,x1,x2,x0,y0);
        }
    }
    printf(" _______________________________________\n");
    printf("\n-> The root of the equation %.4f\n",root);
    return 0;
}
