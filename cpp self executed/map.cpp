#include<iostream>
#include<map>
using namespace std;
int main()
{
	map <string,int> m;
	m["a"]=10;
	m["b"]=20;
	map <string,int>:: iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<endl<<"size="<<m.size();
}