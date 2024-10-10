#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y;
	public:
		friend void print();
};
void print()
{
	sample s;
	s.x=100;
	s.y=200;
	cout<<"x="<<s.x<<endl;
	cout<<"y="<<s.y<<endl;
}
int main()
{
	print();
}