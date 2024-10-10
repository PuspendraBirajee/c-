#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l;
	for(int i=1; i<=5; i++)
	{
		l.push_back(i);
	}
	cout<<"size="<<l.size()<<endl;
	list <int> :: iterator it;
	for(it=l.begin(); it!=l.end();it++)
	{
		cout<<*it<<" ";
	}
}