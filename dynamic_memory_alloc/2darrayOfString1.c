#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    char* arr_str[n];
    for(int i=0;i<n;i++)
    {
       gets(str);
       arr_str[i]=(char*)calloc(strlen(str),sizeof(char));
       strcpy(arr_str[i],str);
    }
    printf("OUTPUT\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",arr_str[i]);
    }
    return 0;
}