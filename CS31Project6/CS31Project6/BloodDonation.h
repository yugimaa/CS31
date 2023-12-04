//Yugo Imanishi
//ID: 106008457

#pragma once
#include<iostream>
using namespace std;

class BloodDonation {
private:
	int mID;
	int mAge;
	double mWeight;
	
	//new
	int mDay;
	int mMonth;
	int mCode;

public:
	BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight, int month, int day);
	//new
	BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight, int month, int day, int code);
	int getID();
	void setID(int EmployeeID);
	int getAge();
	void setAge(int EmployeeAge);
	double getWeight();
	void setWeight(double EmployeeWeight);

	//new
	int getMonth();
	void setMonth(int month);

	int getDay();
	void setDay(int day);

	void setCode(int code);
	int getCode();
};

