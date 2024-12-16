#include<iostream>
using namespace std;
int main()
{
	int total=1;
	for (int i = 1; i < 10; i++)
	{
		total = 2 * (total + 1);
	}
	cout << total << endl;
	return 0;
}