#include<stdio.h>
void solve(int arr[], int n ){
int r=n-1;
if(r > 0)
{
for(int i=0;i<n;i++)
{
    while(r>=0 && arr[r] ==0)
    {
        r--;
    }
    if(r<i)
    {
      break;
    }
    if(arr[i] == 0)
    {
        int t = arr[i];
        arr[i] = arr[r];
        arr[r] = t;
        r--;
    }
}
}
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    solve(a,n);
    return 0;
}