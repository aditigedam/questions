#include<stdio.h>
int b[100001];
int solve(int a[], int n)
{
     int x=-1,xc=0,y=-1,yc=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                xc++;
            }
            else if(a[i]==y)
            {
                yc++;
            }
            else
            {
                if(x==-1)
                {
                    x=a[i];
                    xc=1;
                }
                else if(y==-1)
                {
                    y=a[i];
                    yc =1;
                }
            }
        }
        
        if(xc > n/2)
        return x;
        
        if(yc > n/2)
        return y;
        
        return -1;
        
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
    printf("%d",solve(a,n));
    return 0;
}