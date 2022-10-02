#include<iostream>		//single inheritence
using namespace std;
class person
{
	protected:
		int id;
		char pname[20];
	public:
		void getpersondata()
		{
			cout<<"enter person id = ";
			cin>>id;
			cout<<"enter person name = ";
			cin>>pname;
		}
		void display_person()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name = "<<pname;
		}
};
class employee : public person
{
	protected:
		int bs,hra,da,gs;
	public:
		void get_emp()
		{
			cout<<"\nenter basic salary = ";
			cin>>bs;
		}
		void display_emp()
		{
			hra = bs * 10 / 100;
			da = bs * 10 / 100;
			gs = bs + hra + da;
			
			cout<<"\n da = "<<da;
			cout<<"\n hra = "<<hra;
			cout<<"\n bs = "<<bs;
			cout<<"\n gs = "<<gs;
		}
};
main()
{
	employee e1;
	e1.getpersondata();
	e1.display_person();
	e1.get_emp();
	e1.display_emp();
}
