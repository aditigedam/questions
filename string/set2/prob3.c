#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100001
bool isvowel(char c)
{
  if(c=='a' || c=='A' || c=='U' || c=='u' || c=='e' ||
   c=='E' || c=='i' || c=='I' || c=='o' || c=='O')
   {
    return 1;
   }
   return 0;
}
void solve(char s[])
{
    int n = strlen(s),l=0,r=n-1;
    //hellothere
    while(l<r)
    {
        if(!isvowel(s[l]))
        {
            l++;
        }
        else if(!isvowel(s[r]))
        {
            r--;
        }
        else
        {
            char t=s[l];
            s[l]=s[r];
            s[r]=t;
            l++;
            r--;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
}
int main()
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}