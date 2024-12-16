#include<iostream>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (size_t i = 0; i < strlen(s); i++)
	{
		char c = tolower(s[i]);
		if (isalpha(c))
		{
			counts[c - 'a']++;
		}
	}	
}
int main()
{
	const int max = 10;
	char s[max];
	int counts[26];
	cout << "请输入字符串：";
	for (int i = 0; i < max; i++)
	{
		cin >> s[i];
	}
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char ch = 'a' +i ;
			cout << ch << "出现次数：" << counts[i] << endl;

		}
	}

	return 0;
}