#include<iostream>
using namespace std;
class A
{
	public:
	void showA()
	{
		cout<<"base class A is invoked"<<endl;
	}
};
class B:virtual public A
{
	public:
	void showB()
	{
		cout<<"derived class B is invoked"<<endl;
	}
};
class C:virtual public A
{
	public:
	void showC()
	{
		cout<<"derived class C is invoked"<<endl;
	}
};
class D:public B,C
{
	public:
	void showD()
	{
		cout<<"child class D is invoked"<<endl;
	}
};
int main()
{
	D d;
	d.showA();
}