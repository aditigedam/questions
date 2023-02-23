#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int** w;
    w = (int**)malloc(n*sizeof(int));
    int* temp;
    int m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        temp = (int*)calloc(m+1,sizeof(int));
        if(temp ==NULL)
        {
            i--;
            printf("ERROR!!\n");
            continue;
        }
        temp[0]=m;
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&temp[j]);
        }
        w[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        int m = w[i][0];
        //  printf("%d ",m);
        for(int j=1;j<=m;j++)
        {
            printf("%d ",w[i][j]);
        }
        printf("\n");
    }
    return 0;
}
