#include<iostream>
using namespace std;
class point
{
private:
	int x = 60;
	int y = 80;
public:
	void setpoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	int display()
	{
		cout << "(" << x << "," << y << ")" << endl;
		return 0;
	}
};
int main()
{
	point p;
	p.setpoint(2, 4);
	p.display();
}