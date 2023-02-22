#include<stdio.h>
#include<stdbool.h>
void fun1(int a[])
{
    //sort array
}
void fun2(int* a, int* b)
{
    //swap a and b;
}
bool fun4(char c[])
{
    //palin.
}
void fun6(void (*p)(int))
{
    //switch case
}
int main()
{
    void (*ptr1)(int[]) =&fun1;
    bool (*ptr4)(char[]) =&fun4;
    fun6(ptr1);
    return 0;
}
