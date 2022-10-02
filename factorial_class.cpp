#include<iostream>
using namespace std;
class fact
{
	private:
		int n,fa=1,i=1;
	public:
		void accept()
		{
			cout<<"enter the range = ";
			cin>>n;
		}
				
		void display()
		{
		for(i=0;i<=n;i++)
		{
			fa=(fa*i);	
		}
			cout<<"factorial = "<<fa;
		}
};
main()
{
	fact f;
	f.accept();
	f.display();
}
