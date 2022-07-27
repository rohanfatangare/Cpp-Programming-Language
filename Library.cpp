#include<iostream>
using namespace std;
class Library
{
	float day,charge;
	public:
		void get()
		{
			cout<<"Enter the number of days for returning a book"<<endl;
			cin>>day;
		}
		void check()
		{
			if (day<=5)
			{
					charge=day*0.40;
					cout<<"You have to pay Rs.= "<<charge<<endl;
			}
			else if  (day <= 10)
			{
				charge=day*0.65;
				cout<<"You have to pay Rs.= "<<charge<<endl;
			}
			else
			{
				charge=day*0.80;
				cout<<"You have to pay Rs.= "<<charge<<endl;
			}
		}
};
main()
{
	Library L1,L2;
	L1.get();
	L1.check();
	L2.get();
	L2.check();
}