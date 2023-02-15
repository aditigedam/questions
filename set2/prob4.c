#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define Size 100001
bool check(char s[],int i,char c)
{
        int j=i-1;
        while(j>=0 && s[j] == '1')
        {
            j--;
        }
        if(j < 0 || s[j] != c)
        {
            return 0;
        }
        else
        {
            s[j] = '1';
            s[i] ='1';
        }

        return 1;
}
bool isValid(char s[]){
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i] == ')')
            {
               if(!check(s,i,'('))
               {
                //    printf("%s",s);
                  return 0;
               }
            }
            else if(s[i] == '}')
            {
              if(!check(s,i,'{'))
               {
                  return 0;
               }
            }
            else if(s[i] == ']')
            {
               if(!check(s,i,'['))
               {
                  return 0;
               }
            }
        }
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i] != '1')
            {
                //  printf("%s",s);
                return 0;
            }
        }
        return 1;
}
int main()
{
    char s[Size];
    gets(s);
    if(isValid(s))
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}