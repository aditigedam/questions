#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[],char ss[])
{
    int n = strlen(s),m=strlen(ss);
    int i=0;
    while(i<n && i<m)
    {
        if(s[i]>ss[i])
        {
            printf("%s is greater than %s",s,ss);
            return ;
        }
         else if(s[i] < ss[i])
        {
            printf("%s is greater than %s",ss,s);
            return ;
        }
        i++;
    }
    if(i<n)
    {
        printf("%s is greater than %s",s,ss);
        return;
    }
    else
    {
      printf("%s is greater than %s",ss,s);
        return ;
    }
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    gets(ss);
    solve(s,ss);
    return 0;
}