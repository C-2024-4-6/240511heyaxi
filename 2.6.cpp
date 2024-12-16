#include<iostream>
using namespace std;
int main()
{
    double F;
    cout<<"请输入华氏温度："<<endl;
    cin>>F;
    double C;
    C=5*(F-32)/9;
    cout<<"对应摄氏温度为："<<C<<endl;
    return 0;
}