#include<iostream>
using namespace std;
class complex
{
	private:
		int real, imag;
	public:
		void get()
		{
			cout<<"enter real value: ";
			cin>>real;
			cout<<"enter imaginary value: ";
			cin>>imag;
		}
		void operator +(complex c2)
		{
			cout<<real+c2.real<<"+"<<imag+c2.imag<<"i"<<endl;
		}
};
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	c1+c2;
}