#include <iostream>
using namespace std;

struct DOB{
	int day;
	string month;
	int year;
};
struct Users {
    string name;
    int age;
    string city;
    DOB date;
};

int main() {
    Users U[3];
    Users check;
    for (int i=0;i<3;i++){
	    cout<<"Enter the record of user "<<i+1<<endl;
	    cout<<"Enter the name"<<endl;
    	cin>>U[i].name;	
    	cout<<"Enter the age"<<endl;
    	cin>>U[i].age;	
		cout<<"Enter the city"<<endl;
    	cin>>U[i].city;
		cout<<"Enter D.O.B"<<endl;
		cout<<"Enter the day"<<endl;
    	cin>>U[i].date.day;			
		cout<<"Enter the month"<<endl;
    	cin>>U[i].date.month;
		cout<<"Enter the year"<<endl;
    	cin>>U[i].date.year;
	}
	cout<<"Enter D.O.B"<<endl;
	cout<<"Enter the day"<<endl;
	cin>>check.date.day;			
	cout<<"Enter the month"<<endl;
	cin>>check.date.month;
	cout<<"Enter the year"<<endl;
	cin>>check.date.year;
	for (int i=0;i<3;i++){
		if (U[i].date.day==check.date.day && U[i].date.month==check.date.month && U[i].date.year==check.date.year)
		{
			cout<<"It is "<<U[i].name<<" , Happy Birthday "<<U[i].name<<endl;
		}
	}
    return 0;
}
