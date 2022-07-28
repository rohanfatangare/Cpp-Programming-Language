#include<iostream>
using namespace std;
class Triangle
{
	float height,base,area;
	public:
		void accept()
		{
			cout<<"Enter height of triangle"<<endl;
			cin>>height;
			cout<<"Enter base of triangle"<<endl;
			cin>>base;
		}
		void cal()
		{
			area=0.5*height*base;
		}
		void show()
		{
			cout<<"Height of triangle is:"<<height<<endl;
			cout<<"Base of triangle is:"<<area<<endl;
		}
};//end of class declaration;
main()
{
	Triangle a1,a2;
	a1.accept();
	a1.cal();
	a1.show();
	a2.accept();
	a2.cal();
	a2.show();
}