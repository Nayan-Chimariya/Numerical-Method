#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  float x[10],y[10][10];
  float a,h,s,fy,fact;
  int i,j,n;

  printf("How many terms you want to enter : ");
  scanf("%d",&n);

  printf("\nEnter the value of X\n");
  for(i=0;i<n;i++)
       scanf("%f",&x[i]);

  printf("\nEnter the value of Y\n");
  for(i=0;i<n;i++)
       scanf("%f",&y[i]);

  for(j=1;j<n;j++)
  {
       for(i=0;i<n-j;i++)
       {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
       }
  }

  printf("\nSolve For? : ");
  scanf("%f",&a);

  h=x[1]-x[0];
  s=(a-x[0])/h;

  fy=y[0][0];
  fact=1;

  for(i=1;i<n;i++)
  {
       fy=fy+(s*y[0][i])/fact;
       s=s*(s-i);
       fact=fact*(i+1);
  }

  printf("\nY(%.3f)=%.3f\n",a,fy);

  return 0;
}
