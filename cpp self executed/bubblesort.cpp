#include<iostream>
using namespace std;
template<class t>
void sort(t a[], int n)
{
	t temp;
	int i,j;
	for(int i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
template<class t>
void show(t a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[5]={1,3,2,10,5};
	
	float f[5]={2.5,10.5,9.5,3.5,1.5};
	sort(a,5);
	show(a,5);
	
	sort(f,5);
	show(f,5);
}