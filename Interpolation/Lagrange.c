#include <stdio.h>

int main()
{
    float x[4]={0,1,2,3};
    float fx[4]={1,2.7183,7.3891,20.085};

    float a;
    float value=0, temp= 1;
    int n,i,j;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    printf("Check for what value? : ");
    scanf("%f",&a);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i!=j)
                temp = temp * (a-x[j])/(x[i]-x[j]);
        }
        temp = temp*fx[i];
        value = value + temp;
        temp = 1;
    }
    printf("\n->The value for x = %.3f is %.3f\n",a,value);
}
