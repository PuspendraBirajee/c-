#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque <int> d;
	for(int i=1; i<=5; i++)
	{
		d.push_back(i);
	}
	deque <int> :: iterator it;
	cout<<"size="<<d.size()<<endl;
	for(it=d.begin(); it!=d.end();it++)
	{
		cout<<*it<<" ";
	}
}