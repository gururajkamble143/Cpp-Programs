#include<iostream>
using namespace std;
class employee
{
	protected:
		int e_id;
		string e_name;
		float e_salary;
	public:
		void get_emp()
		{
			cout<<"enter employee id = ";
			cin>>e_id;
			cout<<"enter employee name = ";
			cin>>e_name;
			cout<<"enter employee salary = ";
			cin>>e_salary;
		}
};
class date
{
	protected:
		int date;
	public:
		void get_date()
		{
			cout<<"enter date : dd/mm/yyyy = ";
			cin>>date;
		}
};
class admin : public employee,public date
{
	protected:
		int incent, gs;
	public:
		void get_admin()
		{
			cout<<"enter incentives = ";
			cin>>incent;
			cout<<"enter gross salary = ";
			cin>>gs;
		}
		void display()
		{
			cout<<"\n id = "<<e_id;
			cout<<"\n name = "<<e_name;
			cout<<"\n salary = "<<e_salary;
			cout<<"\n date = "<<date;
			cout<<"\n incentives = "<<incent;
			cout<<"\n gross salary = "<<gs;
		}
};
main()
{
	admin a;
	a.get_emp();
	a.get_date();
	a.get_admin();
	a.display();
}
