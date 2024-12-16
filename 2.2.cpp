#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "请输入a的值：";
	cin >> a;
	cout << a * 6 << endl;
	cout << a + 2 << endl;
	cout << a - 3 << endl;
	cout << a / 4 << endl;
	cout << a%2<< endl;
	cout << 6 / a << endl;//a!=0
	return 0;
}