#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 1; i < 10; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 10);
	int newsize = 0;
	for (int j = 0; j < 10; j++)
	{
		if (j == 9 || arr[j] != arr[j + 1])
		{
			arr[newsize] = arr[j];
			newsize++;
		}
	}
	for (int i = 0; i < newsize; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}