#include<stdio.h>
#include<string.h>
#include <ctype.h>
#define Size 100000
void solve(char s[])
{
    int ans=0;
    for(int i=0;i<strlen(s);i++)
    {
       if(ispunct(s[i]))
       {
        ans++;
       } 
    }
    printf("%d ",ans);
}
int main()
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}