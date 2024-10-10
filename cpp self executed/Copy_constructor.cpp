#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample()
		{
			a=10;
			b=20;
		}
		sample(sample &s1)
		{
			a=s1.a;
			b=s1.b;
		}
		void show()
		{
			cout<<a<<endl<<b<<endl;
		}
};
int main()
{
	sample s1;
	s1.show();
	sample s2(s1);
	s2.show();
}