#include<stdio.h>
int arr[100000];
void solve(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
      arr[a[i]]++;
   }
   for(int i=0;i<n;i++)
   {
    if(arr[a[i]] >1)
    {
        printf("%d\n",a[i]);
        return ;
    }
   }
}

int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    solve(a,n);
    return 0;
}