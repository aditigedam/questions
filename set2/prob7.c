#include<stdio.h>
#include<string.h>
#define Size 100001
char* solve(char s[])
{
    int n = strlen(s);
    int i=0,j=n-1,k=0;
    while(s[i] == ' ')
    {
        i++;
    }
    while(s[j] == ' ')
    {
        j--;
    }
    for(i;i<=j;i++)
    {
        printf("%c",s[i]);
    }
}

//hi there how... x=3, l=5
int main()
{
    char s[Size],ss[Size];
    gets(s);
    // gets(ss);
    solve(s);
    return 0;
}