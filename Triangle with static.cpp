#include<iostream>
using namespace std;
class Triangle
{
	float height,base,area;
	static int count;
	public:
		void accept()
		{
			cout<<"Enter height of triangle"<<endl;
			cin>>height;
			cout<<"Enter base of triangle"<<endl;
			cin>>base;
			count++;
			cal();
		}
		void cal()
		{
			area=0.5*height*base;
		}
		void show()
		{
			cout<<"Height of triangle is:"<<height<<endl;
			cout<<"Base of triangle is:"<<base<<endl;
			cout<<"Area of triangle is:"<<area<<endl;
			cout<<"Objects are: "<<count<<endl;    
		}
};
int Triangle::count;
main()
{                
	Triangle a1,a2,a3,a4;
	a1.accept();
	a1.show();
	a2.accept();
	a2.show();
	a3.accept();
	a3.show();
	a4.accept();
	a4.show();
}