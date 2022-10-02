#include<iostream>
using namespace std;
class prod
{
	public:
	void product(int a, int b)
	{
		cout<<"\n product = "<<a*b;
	}
	void product(int a, double b)
	{
		cout<<"\n product = "<<a*b;
	}	
	void product(double a, int b)
	{
		cout<<"\n product = "<<a*b;
	}	
	void product(double a, double b)
	{
		cout<<"\n product = "<<a*b;
	}
};
main()
{
	prod p;
	p.product(4,4);
	p.product(4.2,4.6);
	p.product(6,6.6);
	p.product(8.9,9);
} 
