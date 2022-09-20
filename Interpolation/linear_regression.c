#include <stdio.h>
#include <math.h>

int main()
{
    int x[10], y[10];
    int n, i;
    float sumX=0, sumY=0, sumXY=0, sumX2=0;
    float a,b;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("\nFor X\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element |%d|: ",i+1);
        scanf("%d",&x[i]);
    }

    printf("\nFor Y\n");
    for(i=0; i<n; i++)
    {
        printf("Enter element |%d|: ",i+1);
        scanf("%d",&y[i]);
    }

    for(i=0; i<n; i++)
    {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i]*y[i];
        sumX2 += pow(x[i],2);
    }

    b = (n*sumXY-sumX*sumY)/(n*sumX2-pow(sumX,2));
    a = (sumY/n)- (b*(sumX/n));
    printf("\nThe required equation is : y = %.3f + %.3fx\n",a,b);
    return 0;
}
