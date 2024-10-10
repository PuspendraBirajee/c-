#include<iostream>
using namespace std;
template<class t>
class sample
{
	private:
	t n;
	public:
		void get()
		{
			cout<<"enter value of n"<<endl;
			cin>>n;
		}
	void show()
		{
			cout<<"n value is "<<n<<endl;
		}
};
int main()
{
	sample<int> s1;
	s1.get();
	s1.show();
	sample<float> s2;
	s2.get();
	s2.show();
	sample<char> s3;
	s3.get();
	s3.show();
}