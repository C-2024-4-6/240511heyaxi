#include<iostream>
using namespace std;
	class box
	{
	private:
		double length;
		double height;
		double width;
	public:
		void setbox(double l, double h, double w)
		{
			length = l;
			height = h;
			width = w;
		}
		double getv()
		{
			return length * height * width;
		}
	};
	int main()
	{
		
		box box1;
		box box2;
		box box3;
		box2.setbox(2.0, 3.4, 3.0);
		box1.setbox(2.3,4.0,6.0);
		box3.setbox(4.5, 3.4, 2.6);
		double v1 = box1.getv();
		double v2 = box2.getv();
		double v3 = box3.getv();
		cout << v1 <<endl ;
		cout << v2 << endl;
		cout << v3 << endl;

	}
