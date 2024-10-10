#include<iostream>
using namespace std;
template <class t>
void swap(t a, t b)
{
	t temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
}
int main()
{
	swap(10,20);
	swap(20.50,40.30);
}