#include<iostream>
#include<cmath>
using namespace std;
int main()
{
		float a,b,c,r1,r2,real,imag;
		cout<<"enter value of a b and c: ";
		cin>>a>>b>>c;
		float d=b*b-4*a*c;
		if(d>0)
		{
			cout<<"root are different"<<endl;
			r1=(-b-sqrt(d))/(2*a);
			r2=(-b+sqrt(d))/(2*a);
			cout<<"r1="<<r1<<endl;
			cout<<"r2="<<r2<<endl;
		}
		else if(d==0)
		{
			cout<<"roots are equal"<<endl;
			r1=(-b)/(2*a);
			cout<<"r1=r2="<<r1<<endl;
		}
		else
		{
			cout<<"roots are complex"<<endl;
			real=-b/(2*a);
			imag=sqrt(d)/(2*a);
			cout<<"r1="<<real<<"+"<<imag<<"i"<<endl;
			cout<<"r2="<<real<<"-"<<imag<<"i"<<endl;
		}
}