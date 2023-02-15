#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    //aaabaabaa
    int n = strlen(s);
    for(int l=n;l>=0;l--)
    {
        for(int i=0;i+l-1<n;i++)
        {
            int l1=i,r=i+l-1;
            while(l1<r && s[l1] == s[r])
            {
                l1++;
                r--;
            }
            if(l1>=r)
            {
                // printf("%d",l);
                for(int j=i;j<i+l;j++)
                {
                     printf("%c",s[j]);
                }
                return;
            }
            // printf("%d ",l);
        }
    }
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    solve(s);
    return 0;
}