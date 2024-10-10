#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v;
	for(int i=1; i<=5; i++)
	
		v.push_back(i);
		
		cout<<"size="<<v.size()<<endl;
	
	
	vector <int> :: iterator it;
	for(it=v.begin(); it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
}