#include <iostream>
using namespace std;
class time
{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	time t1;
	cin>>t1.hour;
	cin>>t1.minute;
	cin>>t1.sec;
	cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl;
	system("pause");
	return 0;
}