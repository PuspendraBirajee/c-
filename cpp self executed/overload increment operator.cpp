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
		void operator ++()
		{
			++a;
			++b;
			++c;
		}
};
int main()
{
	sample s1;
	s1.get();
	s1.show();
	++s1;
	s1.show();
}