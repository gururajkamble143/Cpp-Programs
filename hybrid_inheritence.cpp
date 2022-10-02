#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
	public:
		void get_r()
		{
			cout<<"enter roll no = ";
			cin>>roll_no;
		}
};
class test : public student
{
	protected:
		int part_1, part_2;
	public:
		void get_t()
		{
			cout<<"enter part 1 = ";
			cin>>part_1;
			cout<<"enter part 2 = ";
			cin>>part_2;
		}
};
class sport
{
	protected:
		int score;
	public:
		void get_s()
		{
			cout<<"enter the score = ";
			cin>>score;
		}
};
class result : public test, public sport
{
	protected:
		int total;
	public :
		void show()
		{
			total = part_1 + part_2 + score;
			cout<<"\n roll no = "<<roll_no;
			cout<<"\n part 1 = "<<part_1;
			cout<<"\n part 2 = "<<part_2;
			cout<<"\n score = "<<score;
			cout<<"\n total = "<<total;
		}
};
main()
{
	result r;
	r.get_r();
	r.get_t();
	r.get_s();
	r.show();
}
