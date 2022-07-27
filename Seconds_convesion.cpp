#include<iostream>
using namespace std;
class Time
{
	int hours,minutes,seconds;
	public:
		void accept()
		{
			cout<<"Enter seconds";
			cin>>seconds;
		}
		void cal()
		{
			minutes=seconds/60;
			seconds=seconds % 60;
			hours=minutes/60;
			minutes=minutes % 60;
		}
		void show()
		{
			cout<<"Seconds are "<<endl<<seconds<<endl;
			cout<<"Minutes are "<<endl<<minutes<<endl;
			cout<<"Hours are "<<endl<<hours<<endl;
		}
};
main()
{

	Time t1;
	t1.accept();
	t1.cal();
	t1.show();
}