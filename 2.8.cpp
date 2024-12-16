#include<iostream>
using namespace std;
#define y=3.1415926
int main()
{
    double r,h;
    cout<<"请输入底面半径和圆锥体高度：";
    cin>>r>>h;
    double v;
    v=y*r*r*h/3;
    cout<<"圆锥体的体积为："<<endl;
    return 0;
    
}