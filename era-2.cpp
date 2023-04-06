#include<iostream>
#include<stdio.h>
using namespace std;
class hotel{
//	private:
//	int hotel_id;
//	char hotel_name[50];
//	int hotel_staff;
	
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
	cout<<"=> Enter hotel's details::"<<endl;	
	cout<<"Enter hotel's id :";
	cin>>obj1.hotel_id;
	cout<<"Enter hotel's name :";
	cin>>obj1.hotel_name;
	cout<<"Enter the number of hotel staff member :";
	cin>>obj1.hotel_staff;
	cout<<endl;

	
	cout<<"=> hotel's details:"<<endl;	
	cout<<"hotel's id is :"<<obj1.hotel_id<<endl;
	cout<<"hotel's name is :"<<obj1.hotel_name<<endl;
	cout<<"hotel's staff member :"<<obj1.hotel_staff<<endl<<endl;
	
	return 0;
}








