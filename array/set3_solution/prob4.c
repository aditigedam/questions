#include<stdio.h>
void solve(int arr[], int n,int x){
if(arr[n/2] == x)
{
    printf("YES\n");
}
else
{
     printf("NO\n");
}
}
//1 1 1 1 2 2 2
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    solve(a,n,x);
    return 0;
}