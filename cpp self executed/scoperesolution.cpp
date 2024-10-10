#include<iostream>
using namespace std;
int a=100, b=400;
int main()
{
	int a=50;
	cout<<"local a is"<<a<<endl;
	cout<<"global a is"<<::a<<endl;
	cout<<"b is"<<b<<endl;
	::a=200;
	cout<<"global a is "<<::a<<endl;
}