#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char word[100];
    char** w;
    w = (char**)malloc(n*sizeof(char));
    if(w==NULL)
    {
        printf("ERROR!!!!!!!!!");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%s",word);
        w[i] = (char*)calloc(strlen(word),sizeof(char));
        strcpy(w[i],word);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s ",w[i]);
    }
    return 0;
}
