#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100001
char arr[26];
void solve(char a[],int j)
{
    for(int i=j;i<strlen(a);i++)
    {
        if(a[i]!=a[j])
        {
            char t = a[i];
            a[i] = a[j];
            a[j] = t;
            printf("%s ",a);
            solve(a,j+1);
             t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
     printf("%s ",s);
    // for(int i=0;i<strlen(s);i++)
    solve(s,0);
    return 0;
}