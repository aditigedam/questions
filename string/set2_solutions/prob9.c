#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100001
char arr[26];
bool solve(char a[],char b[])
{
     for(int i=0;i<strlen(b);i++)
     {
        arr[b[i]-'0']++;
     }

     for(int i=0;i<strlen(a);i++)
     {
        if(arr[a[i]-'0'] > 0)
        {
            arr[a[i]-'0']--;
        }
        else
        {
            return 0;
        }
     }
     return 1;
}
int main()
{
    char s[Size],ss[Size];
    gets(s);
    fgets(ss,Size,stdin);
    if(solve(s,ss))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}