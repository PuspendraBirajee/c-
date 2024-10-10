#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class rectangle: public shapes
{
	private:
		int l=10,b=5;
	public:
		void area()
		{
			cout<<"area="<<l*b<<endl;
		}
};
class circle:public shapes
{
	private:
		float r=10.5f;
	public:
		void area()
		{
			cout<<"area="<<3.14*r*r<<endl;
		}
};
int main()
{
	shapes *sptr;
	rectangle r;
	sptr=&r;
	sptr->area();
	circle c;
	sptr=&c;
	sptr->area();
}