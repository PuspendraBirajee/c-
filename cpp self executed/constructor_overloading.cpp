#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle()
		{
			length=10;
			breadth=20;
		}
		rectangle(int l,int b)
		{
			length=l;
			breadth=b;
		}
		rectangle(double l,double b)
		{
			length=l;
			breadth=b;
		}
		rectangle(int l)
		{
			length=l;
			breadth=5;
		}
		void area()
		{
			cout<<"area="<<length*breadth<<endl;
		}
};
int main()
{
	rectangle r1;
	rectangle r2(5,2);
	rectangle r3(2.2,2.3);
	rectangle r4(4);
	r1.area();
	r2.area();
	r3.area();
	r4.area();
}