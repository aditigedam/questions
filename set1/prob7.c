#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[],int x, int l)
{
    int n = strlen(s);
    for(int i=x; i < x+l && x+l <= n;i++)
    {
        printf("%c",s[i]);
    }
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    int x, l;
    scanf("%d%d",&x,&l);
    solve(s,x,l);
    return 0;
}