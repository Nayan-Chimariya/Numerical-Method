#include <stdio.h>
#include <math.h>
// x = 1 2 3 4 5
// y = 0.5 2 4.5 8 12.5
int main()
{
    float x[10], y[10];
    int n, i;
    float sumX=0, sumY=0, sumXY=0, sumX2=0;
    float a,b,real_a;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("\nFor X\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element |%d|: ",i+1);
        scanf("%f",&x[i]);
    }

    printf("\nFor Y\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element |%d|: ",i+1);
        scanf("%f",&y[i]);
    }

    for(i=0; i<n; i++)
    {
        sumX += log10(x[i]);
        sumY += log10(y[i]);
        sumXY += log10(x[i])*log10(y[i]) ;
        sumX2 += pow(log10(x[i]),2);
    }

    b = (n*sumXY-sumX*sumY)/(n*sumX2-pow(sumX,2));
    a = (sumY/n)- (b*(sumX/n));
    real_a = pow(10,a);

    printf("\nThe required equation is : y = %.3fx^%.3fx\n",real_a,b);
    return 0;
}
