#include<stdio.h>
void solve1(int a[],int b[],int n,int m)
{
   int ans[n+m];
   int i=0,j=0,k=0;
   while(i<n && j<m)
   {
    if(a[i] < b[j])
    {
        ans[k] = a[i];
        i++;
    }
    else
    {
        ans[k]=b[j];
        j++;
    }
      k++;
   }
      while(i<n)
   {
        ans[k] = a[i];
        i++;
        k++;
   }
         while(j<m)
   {
        ans[k] = b[j];
        j++;
        k++;
   }
   for(int i=0;i<n+m;i++)
   {
    printf("%d ",ans[i]);
   }
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    solve1(a,b,n,m);
    return 0;
}