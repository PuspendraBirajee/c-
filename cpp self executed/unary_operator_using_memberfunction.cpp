#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b,c;
	public:
		void get()
	{
		a=50;
		b=60;
		c=-70;
	}
	void show()
	{
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
		cout<<"c="<<c<<endl;
	}
	void operator -()
	{
		a=-a;
		b=-b;
		c=-c;
	}
};
int main()
{
	sample s;
	s.get();
	s.show();
	-s;
	cout<<"after unary minus"<<endl;
	s.show();
}