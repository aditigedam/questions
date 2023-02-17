#include<stdio.h>
void solve(int a[],int n)
{
  int x=-1,y=-1;
  for(int i=0;i<n;i++)
  {
    if(x==-1)
    {
        x=a[i];
    }
    else if(y==-1)
    {
        y=a[i];
    }
    else if(x<a[i])
    {
        y=x;
        x=a[i];
    }
    else if(y<a[i])
    {
        y=a[i];
    }
  }
  printf("%d\n",y);
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