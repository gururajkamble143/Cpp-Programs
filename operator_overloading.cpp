#include<iostream>
using namespace std;
//operator overloading
class count
{
	private:
		int value;
	public:
		count()
		{
			value=5;
		}
	void operator ++()
	{
		++value;
	}
	void operator --()
	{
		--value;
	}
	void display()
	{
		cout<<"count:"<<value<<endl;
	}
};
main()
{
	count c1;
	c1.display();
	++c1;
	c1.display();
	count c2;
	c2.display();
	--c2;
	c2.display();
}
