#include<iostream>
using namespace std;
//function overriding
class base
{
	public:
		void display()
		{
			cout<<"it is base class";
		}
};
class derived : public base
{
	public:
		void display()
		{
			cout<<"it is derived class";
		}
};
main()
{
	derived d;
	d.display();
}
