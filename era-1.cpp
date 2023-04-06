#include<iostream>
#include<stdio.h>
using namespace std;
class hotel{
	public:
	int hotel_id;
	char hotel_name[50];
	int hotel_staff;	
};
int main(){
	hotel obj1;
	obj1.hotel_id;
	obj1.hotel_name;
	obj1.hotel_staff;
	cout<<"=> Enter 1st hotel's details::"<<endl;	
	cout<<"Enter hotel's id :";
	cin>>obj1.hotel_id;
	cout<<"Enter hotel's name :";
	cin>>obj1.hotel_name;
	cout<<"Enter the number of hotel staff member :";
	cin>>obj1.hotel_staff;
	cout<<endl;
	
	hotel obj2;
	obj2.hotel_id;
	obj2.hotel_name;
	obj2.hotel_staff;
	cout<<"=> Enter 2nd hotel's details::"<<endl;
	cout<<"Enter hotel's id :";
	cin>>obj2.hotel_id;
	cout<<"Enter hotel's name :";
	cin>>obj2.hotel_name;
	cout<<"Enter the number of hotel staff member :";
	cin>>obj2.hotel_staff;
	cout<<endl;
	
	hotel obj3;
	obj3.hotel_id;
	obj3.hotel_name;
	obj3.hotel_staff;
	cout<<"=> Enter 3rd hotel's details::"<<endl;
	cout<<"Enter hotel's id :";
	cin>>obj3.hotel_id;
	cout<<"Enter hotel's name :";
	cin>>obj3.hotel_name;
	cout<<"Enter the number of hotel staff member :";
	cin>>obj3.hotel_staff;
	cout<<endl;
	
	cout<<"=>1st hotel's details:"<<endl;	
	cout<<"hotel's id is :"<<obj1.hotel_id<<endl;
	cout<<"hotel's name is :"<<obj1.hotel_name<<endl;
	cout<<"hotel's staff member :"<<obj1.hotel_staff<<endl<<endl;
	cout<<"=>2nd hotel's details:"<<endl;
	cout<<"hotel's id is :"<<obj2.hotel_id<<endl;
	cout<<"hotel's name is :"<<obj2.hotel_name<<endl;
	cout<<"hotel's staff member :"<<obj2.hotel_staff<<endl<<endl;
	cout<<"=>3rd hotel's details:"<<endl;
	cout<<"hotel's id is :"<<obj3.hotel_id<<endl;
	cout<<"hotel's name is :"<<obj3.hotel_name<<endl;
	cout<<"hotel's staff member :"<<obj3.hotel_staff<<endl;
	return 0;
}
