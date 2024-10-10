#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length,breadth;
	public:
		Rectangle(int l, int b)
		{
			this->length=l;
			this->breadth=b;
		}
		void show()
		{
			cout<<"Area="<<length*breadth<<endl;
		}
};
int main()
{
	Rectangle r1(10,20);
	//Rectangle r2(5,10);
	r1.show();
//	r2.show();
}