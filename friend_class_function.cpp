#include<iostream>
using namespace std;
//friend class
class B; //forward declaration of class B
class A
{
	private:
		int i;
	public:
		void stevalue(int p)
		{
			i = p;
		}
		friend void min(A a,B b);
};
class B
{
	private:
		int j;
	public:
		void setvalue(int q)
		{
			j = q;
		}
		friend void min(A a,B b);
};
void min(A a,B b)
{
	if(a.i<=b.j)
	{
		cout<<"i = "<<a.i;
	}
	else
	{
		cout<<"j = "<<b.j;
	}
}
main()
{
	A a;
	a.stevalue(30);
	B b;
	b.setvalue(40);
	min(a,b);
}
