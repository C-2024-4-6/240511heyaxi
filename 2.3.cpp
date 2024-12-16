#include<iostream>
using namespace std;
int main()
{
	double a;
	cout << "请输入三角形第一条边a的值：";
	cin >> a;
	double b;
	cout << "请输入三角形第二条边b的值：";
	cin >> b;
	double c;
	cout << "请输入三角形第三条边c的值：";
	cin >> c;
	double C = a + b + c;
	if (a == b && a!=c|| a == c && a !=b || b == c && b !=a)
	{
		cout << "这是一个等腰三角形" << endl;
	}
	else
	{
		cout << "这不是等腰三角形" << endl;
	}
	return 0;
}