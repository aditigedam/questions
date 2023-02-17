#include<stdio.h>
void solve(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
    if(a[i] < 0)
    {
        int j=i;
        while(j>0 && a[j-1]>=0)
        {
            int t= a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j--;
        }
    }
  }
  for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,m;
    scanf("%d",&n );
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    solve(a,n);
    return 0;
}