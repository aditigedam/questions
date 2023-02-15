#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
  int i=0;
  while(s[i] != '\0')
  {
    i++;
  }
  printf("%d\n",i);
}
int main()
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}