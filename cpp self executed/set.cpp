#include<iostream>
#include<set>
using namespace std;
int main()
{
	set <int> s;
	s.insert(10);
	s.insert(20);
	set <int>:: iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl<<"size="<<s.size();
}