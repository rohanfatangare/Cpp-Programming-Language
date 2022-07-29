#include<iostream>
using namespace std;
class Staff
{
	string name,post;
	public:
		void accept();
	private:
		void sortout();
	public:	
		void show();
};
void Staff::accept()
{
	cout<<"Enter Name of Staff"<<endl;
	cin>>name;
	cout<<"Enter Post of staff"<<endl;
	cin>>post;
}
void Staff::show()
{
	if(post == "HOD")
	{
		cout<<"Staff name : "<<name<<endl;
		cout<<"Post : "<<post<<endl;
	}
}
main()
{
	Staff staff[5];
	for(int i=0;i<5;i++)
	{
		staff[i].accept();
	}
	for(int i=0;i<5;i++)
	{
		staff[i].show();
	}
}