#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    int n = strlen(s);
    char t[] = "the";
    int ans =0;
    for(int i=0;i<n;i++)
    {
      int k=0;
       while( k<3 && i+k < n)
       {
           if(s[i+k] != t[k])
           {
            break;
           }
           k++;
       }
       if(k>=3)
       {
        ans++;
       }
    }
    printf("%d",ans);
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    solve(s);
    return 0;
}