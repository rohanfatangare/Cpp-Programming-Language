#include<iostream>
using namespace std;
class Weight
{
	float weight,mass_of_object;
	static float gravitational_force;
	public:
		void get()
		{
			cout<<"Enter the mass of object:"<<endl;
			cin>>mass_of_object;
			cal();
		}
		void cal()
		{
			weight=mass_of_object*gravitational_force;
		}
		void show()
		{
			cout<<"Weight is:"<<weight<<endl;
		}
};
float Weight :: gravitational_force=9.8;
main()
{
	Weight w1,w2;
	w1.get();
	w1.show();
	w2.get();
	w2.show();
}