#include<iostream>
#include<string.h>
using namespace std;
main()
{
	cout<<"**********Event Management System**********"<<endl;
	
	string eventname;
	
	cout<<"Enter the name of the event"<<endl;
	cin>>eventname;
	
	string name;
	cout<<"Enter the customer's first and last name"<<endl;
	cin>>name;
	
	int guests;
	cout<<"Enter the number of guests"<<endl;
	cin>>guests;
	
	int time;
	cout<<"Enter the number of minutes in the event"<<endl;
	cin>>time;
	
	cout<<"**********Event estimate for :"<<name;
	cout<<"**************"<<endl;
	
	int servents;
	
	servents=(guests*1)/20;
	cout<<"number of servents is ="<<servents<<endl;
	
	int timecost;
	cout<<"The cost of servents : 30.00"<<endl;
	float foodcost;
	foodcost=20.70*guests;
	cout<<"The cost of food:"<<foodcost<<endl;
	cout<<"Average cost of per person : 20.70"<<endl;
	
	float totalcost;
	totalcost=foodcost+(servents*30.00);
	cout<<"totalcost is ="<<totalcost<<endl;	
	
	cout<<"Please deposit a 25% deposit to reserve the event"<<endl;
	
	float deposit;
	deposit=totalcost*(0.25);
	cout<<"The deposit need is :"<<deposit<<endl;
}
