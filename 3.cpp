#include <iostream>
using namespace std;
class time
{
public:
	void set_time(void);
	void show_time(void);
private:
	int hour;
	int minute;
	int sec;
};
void time::set_time(void)
{
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void time::show_time(void)
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
int main()
{
	time t;
	t.set_time();
	t.show_time();
	system("pause");
	return 0;
}