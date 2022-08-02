#include<iostream>
using namespace std;
class Simple_interest
{
	float principle,duration,simpleinterest;
	static float rate_of_interest;
	public:
		void get()
		{
			cout<<"Enter the Principle amount:"<<endl;
			cin>>principle;
			cout<<"Enter the Time period:"<<endl;
			cin>>duration;
			cal();
		}
		void cal()
		{
			simpleinterest=(principle*duration*rate_of_interest)/100;
		}
		void show()
		{
			cout<<"Simple interest is : "<<simpleinterest<<endl;
		}
};
float Simple_interest::rate_of_interest=8.5;
main()
{
	Simple_interest s1,s2;
	s1.get();
	s1.show();
	s2.get();
	s2.show();
}
