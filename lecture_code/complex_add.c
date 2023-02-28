#include<stdio.h>
typedef struct complex
{
    // 5 + 2i
    int img;
    int real;
}cmp;
cmp add(cmp a, cmp b,cmp c)
{
    c.real =a.real + b.real;
    c.img = a.img + b.img;
    return c;
}
int main()
{
    cmp a,b,c;
    scanf("%d%d",&a.real,&a.img);
    scanf("%d%d",&b.real,&b.img);
    c = add(a,b,c);
    printf("%d + i%d",c.real,c.img);
    return 0;
}
