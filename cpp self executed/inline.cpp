#include<iostream>
using namespace std;
inline int big(int a, int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	int a,b;
	cout<<"enter two values: ";
	cin>>a>>b;
	cout<<"bigger number is: "<<big(a,b);
}