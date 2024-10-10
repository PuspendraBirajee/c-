#include<iostream>
using namespace std;
class person
{
	protected:
		string name;
		string gender;
		int age;
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
			cout<<"name: "<<name<<endl;
			cout<<"gender: "<<gender<<endl;
			cout<<"age: "<<age<<endl;
		}
};
class employee:public person
{
	private:
		string emplid;
		string salary;
	public:
		void getemp()
		{
			getp();
			cout<<"enter emplid: ";
			cin>>emplid;
			cout<<"enter salary: ";
			cin>>salary;
		}
		void showem()
		{
			showp();
			cout<<"emplid: "<<emplid<<endl;
			cout<<"salary: "<<salary<<endl;
		}
};
class student:public person
{
	protected:
		string branch;
		string pinno;
		string college;
		void getst()
		{
			getp();
			cout<<"enter branch: ";
			cin>>branch;
			cout<<"enter pinno: ";
			cin>>pinno;
			cout<<"enter college: ";
			cin>>college;
		}
		void showst()
		{
			showp();
			cout<<"branch: "<<branch<<endl;
			cout<<"pinno: "<<pinno<<endl;
			cout<<"college: "<<college<<endl;
		}
};
class marks:public student
{
	protected:
		int m1,m2,m3,m4,m5;
		int per;
	public:
	void getma()
	{
		getst();
		cout<<"enter 5 subject marks: ";
		cin>>m1>>m2>>m3>>m4>>m5;
	}
	void showma()
	{
		showst();
		cout<<"Your marks: "<<m1<<m2<<m3<<m4<<m5<<endl;
		per=(m1+m2+m3+m4+m5)/5;
		cout<<"percentage: "<<per<<"%"<<endl;
	}
};
int main()
{
	employee e;
	e.getemp();
	e.showem();
	marks m;
	m.getma();
	m.showma();
}