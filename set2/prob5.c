#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100001
void solve(char s[])
{
  int n = strlen(s);
  char ans[Size];
  int k=0;
  for(int i=0;i<n;i++)
  {
    if((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z'))
    {
        ans[k]=s[i];
        k++;
    }
  }

  for(int i=0;i<strlen(ans);i++)
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