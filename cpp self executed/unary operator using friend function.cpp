#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b,c;
	public:
		void get()
		{
			cout<<"enter values for a, b and c: ";
			cin>>a>>b>>c;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
			cout<<"c="<<c<<endl;
		}
		friend void operator -(sample &s);
};
void operator -(sample &s)
	{
		s.a=-s.a;
		s.b=-s.b;
		s.c=-s.c;
	}
int main()
{
	sample s;
	s.get();
	s.show();
	cout<<"after unary minus"<<endl;
	-s;
	s.show();
}