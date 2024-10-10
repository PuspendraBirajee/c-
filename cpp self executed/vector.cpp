#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	for(int i=1; i<=5; i++)
	
		v.push_back(i);
		cout<<"size="<< v.size()<<endl;
		v.insert(v.begin()+2,6);
		v.erase(v.begin());
		vector <int>::iterator it;
		for(it=v.begin(); it!=v.end(); it++)
		{
			cout<<*it<<" ";
		}

}

