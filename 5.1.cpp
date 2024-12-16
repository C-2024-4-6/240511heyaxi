#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
		int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		int h, m, s;
		cin >> h;
		cin >> m;
		cin >> s;
		hour = h;
		minute = m;
		sec= s;
	}
	int showtime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
		return 0;
	}
	
};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.settime();
	tl.showtime();
	return 0;
}