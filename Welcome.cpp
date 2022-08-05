#include<iostream>
using namespace std;
class Welcome
{
	static string var;
	public:
		void show()
		{
			cout<<var<<endl;
		}
};
string Welcome::var="Welcome";
main()
{
	Welcome w;
	w.show();
}