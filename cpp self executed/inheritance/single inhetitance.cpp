#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		string gender;
		int age;
//	public:
		void getp()
		{
			cout<<"enter name: ";
			cin>>name;
			cout<<"enter gender: ";
			cin>>gender;
			cout<<"enter age: ";
			cin>>age;
		}
		void showp()
		{
			cout<<"name= "<<name<<endl;
			cout<<"gender= "<<gender<<endl;
			cout<<"age= "<<age<<endl;
		}
};
class student:public person
{
	private:
		string pinno;
		string branch;
		string college;
	public:
		void getst()
		{
			getp();
			cout<<"enter pinno: ";
			cin>>pinno;
			cout<<"enter branch: ";
			cin>>branch;
			cout<<"enter college: ";
			cin>>college;
		}
		void showst()
		{
			showp();
			cout<<"pinno= "<<pinno<<endl;
			cout<<"branch= "<<branch<<endl;
			cout<<"college= "<<college<<endl;
		}
};
int main()
{
	student s;
//	s.getp();
	s.getst();
//	s.showp();
	s.showst();
}