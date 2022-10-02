#include<iostream>
using namespace std;
class employee
{
	protected:
		int e_id;
		string name;
	public:
		void get_emp()
		{
			cout<<"\n\nenter employee id = ";
			cin>>e_id;
			cout<<"\nenter employee name = ";
			cin>>name;
		}
};
class worker : public employee
{
	protected:
		int overtime_salary;
	public:
		void get_worker()
		{
			cout<<"\nenter worker overtime salary = ";
			cin>>overtime_salary;
		}
		void show_worker()
		{
			cout<<"\nemp id = "<<e_id;
			cout<<"\nemp name = "<<name;
			cout<<"\novertime salary = "<<overtime_salary;
		}
};
class manager : public employee
{
	protected:
		int add_allow;
	public:
		void get_manager()
		{
			cout<<"\nenter manager additional allowences = ";
			cin>>add_allow;
		}
		void show_manager()
		{
			cout<<"\nemp id = "<<e_id;
			cout<<"\nemp name = "<<name;
			cout<<"\nadditional allowences = "<<add_allow;
		}
};
main()
{
	worker w;
	w.get_emp();
	w.get_worker();
	w.show_worker();
	manager m;
	m.get_emp();
	m.get_manager();
	m.show_manager();
}
