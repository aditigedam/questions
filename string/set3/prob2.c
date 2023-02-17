
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100000
bool solve(char ch)
{
    if(ch>='0' && ch <='9' ||
    (ch == 'A' ||ch == 'B' ||ch == 'C' ||ch == 'D' ||ch == 'E' ||ch == 'F'))
    {
        return 1;
    }
    return 0;
}
int main()
{
   char ch;
   scanf("%c",&ch);
   if(solve(ch))
   {
    printf("YES\n");
   }
   else
   {
    printf("NO\n");
   }
    return 0;
}