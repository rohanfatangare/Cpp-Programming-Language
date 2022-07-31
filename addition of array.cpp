#include<iostream>
using namespace std;
class Array
{
	int a[5];
	public:
		void accept()
		{
		for(int i=0;i<5;i++)
			{
				cout<<"Enter Number: "<<i+1<<endl;
				cin>>a[i];
			}
		}
		void show()
		{
		for(int i=0;i<5;i++)
			{
				cout<<"Numbers are: "<<endl;
				cout<<a[i]<<endl;
			}
		}
		Array addition(Array obj)
		{
			Array temp;
			for(int i=0;i<5;i++)
			{
				temp.a[i]=a[i]+obj.a[i];
			}
			return temp;
		}
};
int main()
{
	Array a1,a2,a3;
	a1.accept();
	a2.accept();
	a3=a1.addition(a2);
	cout<<"First array is :"<<endl;
	a1.show();
	cout<<"Second array is :"<<endl;
	a2.show();
	cout<<"Addition of array is :"<<endl;
	a3.show();
}