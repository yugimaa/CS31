//Yugo Imanishi
//ID: 106008457

#include<iostream>
#include"BloodDonation.h"
#include"VacationAccount.h"
using namespace std;

VacationAccount::VacationAccount(int EmployeeID)
{
	//starts off with balance of 0
	mBalance = 0;
	mDonationNumber = 0; //new
	if (EmployeeID >= 100000 && EmployeeID <= 999999)
	{
		mID = EmployeeID;
	}
	else
	{
		mID = -1;
	}
}


//setting mBalance
void VacationAccount::setmBalance(double balance)
{
	mBalance = balance;
}

double VacationAccount::getBalance()
{
	return mBalance;
}

int VacationAccount::getID()
{
	return mID;
}

bool VacationAccount::addVacationToAccount(BloodDonation donation)
{
		//compares mID for Vacationaccount with BloodDonation mID
		//checks if ID, age and weight is not -1
		//chnaged to check for valid day
	if (mID == donation.getID() && donation.getID() != -1 && donation.getAge() != -1 && donation.getWeight() != -1 && donation.getDay() != -1 && donation.getMonth() != -1)
	{
		//if bonus code 123 is used, multiples vacation hours by 3
		if (donation.getCode() == 123)
		{
			mBalance = mBalance + 12.0;
			mDonationNumber = mDonationNumber + 1;
			return true;
		}
		else
		{
			mBalance = mBalance + 4.0;
			mDonationNumber = mDonationNumber + 1;
			return true;
		}
	}
	else
	{
		return false;
	}
}