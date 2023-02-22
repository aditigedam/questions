#include<stdio.h>
#include<stdlib.h>
int main()
{
    //use of realloc
    int* ptr = (int*)calloc(5 , sizeof(int));
    // printf("\ncalloc\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }
        for(int i=0;i<5;i++)
    {
        printf("%d ",ptr[i]);
    }
    ptr = (int*)realloc(ptr,10 * sizeof(int));
    printf("\nRealloc\n");
    for(int i=0;i<10;i++)
    {
       ptr[i]=i;
    }
        for(int i=0;i<10;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}
