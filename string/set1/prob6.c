#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[])
{
    int n = strlen(s),nums=0,alpha=0,spec=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j] > s[j+1])
            {
                char temp = s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
        printf("%s\n",s);

}
int main()
{
    char s[Size];
    gets(s);
    solve(s);
    return 0;
}