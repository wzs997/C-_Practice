#include <iostream>
using namespace std;
class time
{
public:
	void set_time(void)
	{
	cin>>hour;
	cin>>minute;
	cin>>sec;
	}
	void show_time(void)
	{
		cout<<hour<<":"<<minute<<":"<<sec<<endl;
	}
private:
	int hour;
	int minute;
	int sec;
};
int main1()
{
	time t;
	t.set_time();
	t.show_time();
	system("pause");
	return 0;
}