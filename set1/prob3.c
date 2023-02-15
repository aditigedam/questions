#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    int n = strlen(s);
    for(int i=n-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
int main()s
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}