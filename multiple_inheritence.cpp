#include<iostream>
using namespace std;		//multiple inheritence
class vehicle
{
	protected:
		int vehicle_no;
	public:
		void accept()
		{
			cout<<"\n enter vehicle no = ";
			cin>>vehicle_no;
		}
};
class car : public vehicle
{
	protected:
		float car_price;
		char car_name[20];
	public:
		void get_car_data()
		{
			cout<<"\nenter car name = ";
			cin>>car_name;
			cout<<"\nenter car price = ";
			cin>>car_price;
		}
};
class bike : public car
{
	protected:
		float bike_model;
		char bike_name[20];
	public:
		void get_bike_data()
		{
			cout<<"\n enter bike name = ";
			cin>>bike_name;
			cout<<"\n enter bike model = ";
			cin>>bike_model;
		}
	void display()
	{
		cout<<"\nvehicle no = "<<vehicle_no;
		cout<<"\ncar name = "<<car_name;
		cout<<"\ncar price = "<<car_price;
		cout<<"\nbike name = "<<bike_name;
		cout<<"\nbike model = "<<bike_model;
	}
};
main()
{
	bike b1;
	b1.accept();
	b1.get_car_data();
	b1.get_bike_data();
	b1.display();	
}
