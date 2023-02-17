// The Next greater Element for an element x is the first greater element
//  on the right side of x in the array.
//  Elements for which no greater element exist, consider the next greater
#include<stdio.h>
void solve(int arr[], int n){
    for(int i=0;i<n;i++)
    {
        int g=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                g=arr[j];
                break;
            }
        }
        printf("%d ",g);
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