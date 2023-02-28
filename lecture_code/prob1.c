#include<stdio.h>
struct complex
{
    int rel;
    int img;
};
typedef struct complex comp;
void add(comp *a, comp *b, comp *c)
{
    c->rel = a->rel + b->rel;
    c->img = a->img + b->img;
    printf("%d + i%d\n",(*a).rel,(*a).img);
    printf("%d + i%d\n",(*b).rel,(*b).img);
}
int main()
{
   struct complex a, b,c;
   scanf("%d%d",&a.rel,&a.img);
   scanf("%d%d",&b.rel,&b.img);
   add(&a,&b,&c);
   printf("%d+i%d",c.rel,c.img);
    return 0;
}
