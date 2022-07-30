#include<iostream>
using namespace std;
class Person
{
	string name;
	float height;
	public:
		void get()
		{
			cout<<"Enter your name"<<endl;
			cin>>name;
			cout<<"Enter your Height"<<endl;
			cin>>height;
		}
		void show()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Height:"<<height<<endl;
		}
		void tallest(Person obj)
		{
			if(this->height>obj.height)
			show();
			else
			obj.show();
		}
};
main()
{
	Person p1,p2;
	p1.get();
	p2.get();
	p1.tallest(p2);
}