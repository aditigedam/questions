#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100001
int arr[26];
bool solve(char a[], char b[]){
    int n=strlen(a),m=strlen(b)-1;
    for(int i=0;i<n;i++)
    {
        arr[a[i]-'a']++;
    }

    for(int j=0;j<m;j++)
    {
        if(arr[b[j] - 'a'] > 0 )
        arr[b[j]-'a']--;
        else
        return 0;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i] != 0)
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