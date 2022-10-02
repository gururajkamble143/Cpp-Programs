#include<iostream>
using namespace std;
//virtual class
class base
{
	public:idfhgodhogduhksifhsxk
		virtual void display()
		{
			cout<<"it is base class";
		}
};
class derived : public base
{
	public:
		void display()
		{
			cout<<"\nit is a derived class";
		}
};
main()
{
	base b;
	base *bptr;
	derived d;
	bptr=&b;
	bptr->display();
	bptr=&d;
	bptr->display();
}
