#include<iostream>
using namespace std;
class a
{
	public:
	a()
	{
		cout<<"constructor a is invoked"<<endl;
	}
	~a()
	{
		cout<<"destructor a is invoked"<<endl;
	}
};
class b:public a
{
	public:
	b()
	{
		cout<<"constructor b is invoked"<<endl;
	}
	~b()
	{
		cout<<"destructor b is invoked"<<endl;
	}
};
int main()
{
	b B;
}