// Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].
// Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].
#include<stdio.h>
int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
void solve(int arr[], int n){
     for(int i=0;i<=10;i++)
    {
        int f = -1,c=11;
        for(int j=0;j<n;j++)
        {
            if(arr[j] < i)
            f = max(f,arr[j]);
            else if(arr[j] > i)
            c = min(c,arr[j]);
            else
            {
            c=i;
            f=i;
            }
        }
        printf("floor of %d = %d\n",i, f);
        printf("ceil of %d = %d\n",i, c);

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