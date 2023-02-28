#include<stdio.h>
typedef struct studentRecord
{
    char name[20];
     int marks;
    int roll;
} std;

int main()
{
    //array of structure
    int n;
    scanf("%d",&n);
    std a[n];
    for(int i=0;i<n;i++)
    {
       gets(a[i].name);
       scanf("%d",&(a[i].marks));
       scanf("%d",&(a[i].roll));
    }
    for(int i=0;i<n;i++)
    {
      printf("NAME: %s\nRoll %d\nMarks: %d\n",a[i].name,a[i].roll,a[i].marks);
    }
    return 0;
}
