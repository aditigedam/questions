#include<stdio.h>
int b[100001];
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
   for(int i=0;i<100001;i++)
    {
       if(b[i]>0)
       {
         printf("%d ",i);
       }
    }
    return 0;
}