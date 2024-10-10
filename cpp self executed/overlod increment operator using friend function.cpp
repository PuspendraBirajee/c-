#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b,c;
	public:
		void get()
		{
			a=5;
			b=10;
			c=-15;
		}
		
		void show()
		{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
		friend void operator ++(sample &s);
};
void operator ++(sample &s)
		{
			
		
			++s.a;
			++s.b;
			++s.c;
		}
int main()
{
	sample s;
	s.get();
	s.show();
	++s;
	s.show();
}