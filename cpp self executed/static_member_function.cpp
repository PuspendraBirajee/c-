#include<iostream>
using namespace std;
class box
{
	private:
		static int length;
		static int breadth;
		static int height;
	public:
		static void show()
		{
			cout<<"length="<<length<<endl;
			cout<<"breadth="<<breadth<<endl;
			cout<<"height="<<height<<endl;	
		}
};
int box :: length=10;
int box :: breadth=15;
int box :: height=29;
int main()
{
	
	box b;
	cout<<"accessing static function with object name"<<endl;
	b.show();
	cout<<"accessing static function with class name"<<endl;
	box::show();
}