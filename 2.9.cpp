#include<iostream>
using namespace std;
int main()
{
	int day = 1;
	int amount = 2;
	double totalcost = 1.6;
	while (amount*2 <= 100)
	{
		amount*=2;
		totalcost += 0.8 * amount;
		day++;
	}
	double averagecost = totalcost / day;
	cout << "平均每天花：" << averagecost << "元。" << endl;
	return 0;
}
