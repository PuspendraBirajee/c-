#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
	public:
		void area(int l, int b)
		{
			cout<<"area of rectangle: "<<l*b<<endl;
		}
};
int main()
{
	rectangle r;
	r.area(5,6);
}