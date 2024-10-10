#include<iostream>
using namespace std;
class person
{
	private:
		string fname,lname,gender;
		int age;
	public:
		void get()
		{
			cout<<"enter fname: ";
			cin>>this->fname;
			cout<<"enter lname: ";
			cin>>this->lname;
			cout<<"enter gender: ";
			cin>>this->gender;
			cout<<"enter age: ";
			cin>>this->age;
		}
		void show()
		{
			cout<<"fname="<<this->fname<<endl;
			cout<<"lname="<<this->lname<<endl;
			cout<<"gender="<<this->gender<<endl;
			cout<<"age="<<this->age;
		}
};
int main()
{
	person p;
	p.get();
	p.show();
}