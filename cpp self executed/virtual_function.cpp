#include<iostream>
using namespace std;
class base
{
	public:
	virtual void show()
	{
		cout<<"base class function is invoked"<<endl;
	}
};
class derived: public base
{
	public:
	void show()
	{
		cout<<"derived class function is invoked"<<endl;
	}
};
int main()
{
	base b,*bptr;
	derived d;
	bptr=&b;
	bptr->show();
	bptr=&d;
	bptr->show();
}