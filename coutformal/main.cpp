#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

int main()
{
//    cout << "Hello World!" << endl;
//    int a = 123345; float b = 1234.567;
//    printf("%-8d--",a);
//    printf("%.2f\n",b);
//    cout<<"xxxxxxxxxxxxxxxxxx"<<endl;
//    cout<<setiosflags(ios::left)<<setw(8)<<a<<endl;//左对齐
//    cout<<b<<endl;//默认6个有效数字
//    cout<<setw(10)<<setprecision(2)<<setiosflags(ios::fixed)<<b<<endl;//设置位宽为10,小数位数为2,左对齐为定值

//    printf("%x\n",a);
//    printf("%o\n",a);
//    printf("%d\n",a);

//    cout<<hex<<a<<endl;
//    cout<<oct<<a<<endl;
//    cout<<dec<<a<<endl;

//    cout<<setfill('x')<<setiosflags(ios::left)<<setw(8)<<a<<endl; //填充x
    int hour = 0, min = 0, sec = 0;//00:00:00
    //cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;
    cout<<"请输入倒计时(时 分 秒)";
    cin>>hour>>min>>sec;
    while (true)

        {
            cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;
            sleep(1);
            sec--;
            if(sec==-1)
                {
                    //sleep(1);
                    //cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;
                    min--;
                    sec=59;
                }
            if(min==-1)
                {
                    //sleep(1);
                    //cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<":"<<setw(2)<<sec<<endl;
                    hour--;
                    min=59;
                }
            if(hour == 0 && min == 0 && sec == 0)
                break;
        }
    return 0;

}
