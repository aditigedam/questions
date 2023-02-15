#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    int n = strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]>=97)
        {
           s[i] = s[i] - (32);
        }
        else if(s[i] != ' ')
        {
            s[i] = s[i] + (32);
        }
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