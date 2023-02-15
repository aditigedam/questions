#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    int n = strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i] != ' ')
        printf("%c ",s[i]);
    }
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    solve(s);
    return 0;
}