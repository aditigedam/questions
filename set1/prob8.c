#include<stdio.h>
#include<string.h>
#define Size 100001
void solve(char s[],char ss[])
{
    int n = strlen(s),m=strlen(ss);
    if(strstr(s,ss))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}

void solve1(char s[],char ss[])
{
    int n = strlen(s),m=strlen(ss);
    for(int i=0;i+m <= n;i++)
    {
        int k=0,f=1;
         for(int j=i;j<i+m;j++)
         {
            // printf("%c",s[j]);
            if(s[j] != ss[k])
            {
                 f=0;
                 break;
            }
            k++;
         }
         if(f==1 && k>=m)
         {
            printf("YES");
            return ;
         }
    }
    printf("NO");
}
//hi there how... x=3, l=5
int main()
{
    char s[Size],ss[Size];
    gets(s);
    gets(ss);
    // int x, l;
    // scanf("%d%d",&x,&l);
    solve1(s,ss);
    return 0;
}