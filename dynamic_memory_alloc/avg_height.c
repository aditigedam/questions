#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    float* a = (float*)malloc(n*sizeof(float));
    float sum=0,avg=0;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    if((int)sum%2 ==0)
    {
        a = (float*)realloc(a,(n+2)*sizeof(float));
         scanf("%f",&a[n]);
          scanf("%f",&a[n+1]);
          sum+=a[n];
          sum+=a[n+1];
          avg =sum/(n+2);
    }
    else
    {
        avg=sum/n;
    }

    printf("%f \n%f",sum,avg);
    return 0;
}
