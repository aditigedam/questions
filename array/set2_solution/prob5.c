#include<stdio.h>
int arr[100000];
void solve(int a[],int b[],int n,int m)
{
   for(int i=0;i<n;i++)
   {
      arr[a[i]]=1;
   }
    for(int i=0;i<m;i++)
   {
      if(arr[b[i]] == 0)
      {
      arr[b[i]]=-1;
      }
      else if(arr[b[i]] ==1)
      {
        arr[b[i]]=2;
      }
   }
    printf("Union\n");
   for(int i=0;i<100000;i++)
   {
    if(arr[i] != 0 )
    printf("%d ",i);
   }

       printf("\nIntersection\n");
      for(int i=0;i<100000;i++)
   {
    if(arr[i] ==2)
    printf("%d ",i);
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
    solve(a,b,n,m);
    return 0;
}