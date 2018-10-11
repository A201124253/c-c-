#include <iostream>

using namespace std;

//int func(int a)
//{
//    printf("int func(int a)\n");
//}

//int func(char a)
//{
//    printf("int func(char a)\n");
//}

int abs(int data)
{
    return data>0? data:-data;
}

float abs(float data)
{
    return data>0? data:-data;
}

int main()
{
    cout << "Hello World!" << endl;

    float ret = abs(-5.5f);
    cout<<ret<<endl;

    int ret2 = abs(5);
    cout<<ret2<<endl;

//    int a;
//    func(a);

//    char b;
//    func(b);

    return 0;
}

