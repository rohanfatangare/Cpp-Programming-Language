#include<iostream>
using namespace std;
class Birthday
{
	int date,month,year;
	char name[10];
	public:
		void accept()
		{
			cout<<"Enter your name"<<endl;
			cin>>name;
			cout<<"Enter your date of birth"<<endl;
			cin>>date;
			cout<<"Enter your month of birth"<<endl;
			cin>>month;
			cout<<"Enter your Year of birth"<<endl;
			cin>>year;
		}
		void show()
		{
			cout<<"Hello "<<name<<endl<<"Your Birth date is: "<<endl;
			cout<<date<<"-"<<month<<"-"<<year<<endl;
		}
};
main()
{
	Birthday b1,b2;
	b1.accept();
	b1.show();
	b2.accept();
	b2.show();
}