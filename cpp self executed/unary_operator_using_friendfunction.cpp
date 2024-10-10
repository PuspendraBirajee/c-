#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y,z;
	public:
		void get()
		{
			x=5;
			y=10;
			z=-15;
		}
		void show()
		{
			cout<<"x="<<x<<endl<<"y="<<y<<endl<<"z="<<z;
		}
		friend void operator -(sample &s);
};
void operator -(sample &s)
		{
			
			s.x=-s.x;
			s.y=-s.y;
			s.z=-s.z;
		}
int main()
{
	sample s;
	s.get();
	s.show();
	cout<<"after unary operator"<<endl;
	-s;
	s.show();
}