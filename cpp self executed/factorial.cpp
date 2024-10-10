#include<iostream>
using namespace std;
int fac(int n)
	{
		if(n==1)
		{
			return n;
		}
		else
		{
			return n*fac(n-1);
		}
	}
int main()
{
	int n;
	cout<<"enter value of n: ";
	cin>>n;
	cout<<"factorial of n is :"<<fac(n)<<endl;
}