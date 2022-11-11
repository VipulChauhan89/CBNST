// Write a program in “C” Language to interpolate numerically using Newton Forward Difference Method.
#include<stdio.h>
#include<math.h>
#define max 100
int main()
{
    float x,u1,u,y;
    int i,j,n,fact;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the value of X : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i][0]);
    }
    printf("Enter the value of Y : ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i][1]);
    }
    printf("Enter the value of x for which you want y : ");
    scanf("%f",&x);

    // Find the difference table 
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        {
            a[i][j]=a[i+1][j-1]-a[i][j-1];
        }
    }

    printf("The difference table is as follows :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf("%0.2f ",a[i][j]);
        }
        printf("\n");
    }
    u=(x-a[0][0])/(a[1][0]-a[0][0]);
    y=a[0][1];
    u1=u;
    fact=1;
    for(i=2;i<=n;i++)
    {
        y=y+(u1*a[0][i])/fact;
        fact=fact*i;
        u1=u1*(u-(i-1));
    }
    printf("\n\nValue at X=%.2f is = %f \n",x,y);
    return 0;
}