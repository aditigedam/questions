// Given an array containing 0s and 1s. 
// Find the number of subarrays having equal number of 0s and 1s.
#include<stdio.h>
int pos[100000];
int neg[100000];
void solve(int arr[],int n)
{
     for(int i=0;i<n;i++)
        {
          if(arr[i]==0)
          {
              arr[i]=-1;
          }
        }
        int ans=0;
        pos[0]++;
        
        if(arr[0] >= 0)
        {
            if(arr[0] ==0)
            {
                ans++;
            }
            pos[arr[0]]++;
        }
        else
        {
            neg[-1*arr[0]]++ ;
        } 


        for(int i=1;i<n;i++)
        {
           arr[i] += arr[i-1];
           if(arr[i] >=0)
           {
            ans += pos[arr[i]];
            pos[arr[i]]++;
           }
           else 
           {
               ans += neg[-1*arr[i]];
               neg[-1*arr[i]]++;
           }
        }
        printf("%d",ans);
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