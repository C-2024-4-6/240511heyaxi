#include<iostream>
using namespace std;
int main()
{
	double arr[10] = { 3.152345,2.34354,3545.556,46.565,454.546,465.546,23.23,7868.87,879.765,543.67 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 10 - j - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k < 10; k++)
	{
		cout << arr[k] << endl;
	}
}