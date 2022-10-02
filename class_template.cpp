#include<iostream>
using namespace std;
//class template

template<class T>
class A
{
	private:
		T x;
		T y;
	public:
		A(T p,T q)
		{
			x=p;
			y=q;
		}
		void display()
		{
			cout<<"\n x = "<<x<<"\t y = "<<y<<endl;
		}
};
main()
{
	A<int>obj1(2,5);
	obj1.display();
	A<float> obj2(4.5,7.7);
	obj2.display();
}
