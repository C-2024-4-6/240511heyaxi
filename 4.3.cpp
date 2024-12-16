#include<iostream>
using namespace std;
int main()
{
	bool lockers[100] = { false };
	for (int s = 1; s <100; s++)
	{
		for (int l = s; l <100; l+=s)
		{
			lockers[l - 1] = !lockers[l - 1];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (lockers[i])
		{
			cout << i + 1 << " ";
		}
	}
	return 0;
}