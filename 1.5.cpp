#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int num1, num2;
	cout << "请输入两个正整数：";
	cin >> num1 >> num2;
	int c = gcd(num1, num2);
	int d = lcm(num1, num2);
	cout << "最大公因数是：" << c << endl;
	cout << "最小公倍数是：" << d << endl;
	return 0;


}