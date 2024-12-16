#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字母：" ;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		cout << static_cast<char>(ch - 32) << endl;
	}
	else
	{
		cout << "字符的ASC11码为：" << static_cast<int>(ch) << endl;
	}
	return 0;

}