#include<iostream>
using namespace std;
namespace one
{
	void display()
	{
		cout<<"Inside first namespace"<<endl;
	}
}
namespace two
{
	void display()
	{
		cout<<"Inside second namespace"<<endl;
	}
}
int main()
{
	one::display();
	two::display();
}