#include<stdio.h>
#include<string.h>
#define Size 100000
void solve(char s[])
{
    int k=0;
    char ans[Size];
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] >='a' && s[i] <= 'z' || 
        (s[i] >='A' && s[i] <= 'Z'))
        {
            ans[k]=s[i];
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%c",ans[i]);
    }
}
int main()
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}