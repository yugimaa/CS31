//Yugo Imanishi
//ID: 106008457

#include<iostream>
#include"BloodDonation.h"
using namespace std;

BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight, int month, int day)
{
	setID(EmployeeID);
	setAge(EmployeeAge);
	setWeight(EmployeeWeight);

	//new
	setMonth(month);
	setDay(day);
};

BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight, int month, int day, int code)
{
	setID(EmployeeID);
	setAge(EmployeeAge);
	setWeight(EmployeeWeight);

	//new
	setMonth(month);
	setDay(day);
	
	setCode(code);
}

//setting ID
void BloodDonation::setID(int EmployeeID)
{
	//checks if the ID is 6 digit number and sets mID as the input. If not, sets -1 as ID
	if (EmployeeID >= 100000 && EmployeeID <= 999999)
	{
		mID = EmployeeID;
	}
	else
	{
		mID = -1;
	}
}
int BloodDonation::getID()
{
	return mID;
}


//setting Age
void BloodDonation::setAge(int EmployeeAge)
{
	if (EmployeeAge >= 21 && EmployeeAge <= 65)
	{
		mAge = EmployeeAge;
	}
	else
	{
		mAge = -1;
	}
}
int BloodDonation::getAge()
{
	return mAge;
}

//setting weight
void BloodDonation::setWeight(double EmployeeWeight)
{
	if (EmployeeWeight >= 101.00 && EmployeeWeight <= 280.00)
	{
		mWeight = EmployeeWeight;
	}
	else
	{
		mWeight = -1;
	}
}
double BloodDonation::getWeight()
{
	return mWeight;
}


//new:

//setting month
void BloodDonation::setMonth(int month)
{
	if (month > 0 && month < 13)
	{
		mMonth = month;
	}
	else
	{
		mMonth = -1;
	}
}
int BloodDonation::getMonth()
{
	return mMonth;
}

//setting day
void BloodDonation::setDay(int day)
{
	//31 day month
	if ((mMonth == 1 || mMonth == 3 || mMonth == 5 || mMonth == 7 || mMonth == 8 || mMonth == 10 || mMonth == 12) && day <= 31)
	{
		mDay = day;
	}
	//30 day month
	else if ((mMonth == 4 || mMonth == 6 || mMonth == 9 || mMonth == 11) && day <= 30)
	{
		mDay = day;
	}
	//February
	else if (mMonth == 2 && day <= 28)
	{
		mDay = day;
	}
	else
	{
		mDay = -1;
	}
}
int BloodDonation::getDay()
{
	return mDay;
}

//setting code (for bonus)
void BloodDonation::setCode(int code)
{
	mCode = code;
}
int BloodDonation::getCode()
{
	return mCode;
}
