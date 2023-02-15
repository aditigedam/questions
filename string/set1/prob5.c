#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    int n = strlen(s),nums=0,alpha=0,spec=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i] <='9')
        {
            nums++;
        }
        else if((s[i]>='a' && s[i] <='z') 
        || (s[i]>='A' && s[i] <='Z'))
        {
            alpha++;
        }
        else
        {
            spec++;
        }
    }
        printf("%d\n",alpha);
        printf("%d\n",nums);
        printf("%d\n",spec);

}
int main()
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}