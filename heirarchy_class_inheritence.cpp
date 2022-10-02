#include<iostream>
using namespace std;
class staff
{
	protected:
		int code;
	public:
		void get()
		{
			cout<<"\nenter staff code = ";
			cin>>code;
		}
};
class teacher : public staff
{
	protected:
		string subject;
	public:
		void get()
		{
			staff::get();
			cout<<"\nenter subject = ";
			cin>>subject;
		}
	void show()
	{
		cout<<"\nteacher code = "<<code;
		cout<<"\nsubject = "<<subject;
	}
};
class officer : public staff
{
	protected:
		char grade;
	public:
		void get()
		{
			cout<<"\nenter the grade = ";
			cin>>grade;
		}
	void show()
	{
		cout<<"\nofficer code = "<<code;
		cout<<"\nofficer grade = "<<grade;
	}
};
main()
{
	teacher t;
	t.get();
	t.show();
	officer o;
	o.get();
	o.show();
}
