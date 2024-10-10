#include<iostream>
using namespace std;
class shapes
{

	public:
		void area(int length,int breadth)
		{
			cout<<"area="<<length*breadth<<endl;
		}
		void area(float l,float b,float h)
		{
			cout<<"area="<<l*b*h<<endl;
		}
		void area(double radius)
		{
			cout<<"area="<<3.14*radius*radius<<endl;
		}
};
int main()
{
	shapes s;
	s.area(5,10);
	s.area(2.30,4.54,7.98);
	s.area(6.12);		
}