#include <stdio.h>

int main()
{
    const int a = 10;
    //a = 10;
    int *p = &a;
    *p = 100;
    printf("Hello World!\n");
    printf("a=%d",a);
    return 0;
}


//const int a; int const a;等价
//int *const p; 修饰p 不能变，p的内容能变

int func(int a)
{

}
int func(char b)
