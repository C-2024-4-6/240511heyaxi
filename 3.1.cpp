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
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	cout << lcm(m, n) << endl;
	return 0;
}