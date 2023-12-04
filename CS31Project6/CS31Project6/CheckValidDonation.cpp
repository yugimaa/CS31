#include<iostream>
#include"BloodDonation.h"
#include"VacationAccount.h"
#include"CheckValidDonation.h"
using namespace std;

CheckValidDonation::CheckValidDonation(BloodDonation donation1, BloodDonation donation2)
{
	if (donation1.getDay() != -1 && donation1.getMonth() != -1 && donation2.getDay() != -1 && donation2.getMonth() != -1)
	{
		mFirstDay = donation1.getDay();
		mSecondDay = donation2.getDay();
		mSecondMonth = donation2.getMonth();
		mFirstMonth = donation1.getMonth();
	}
	else
	{
		mFirstDay = -1;
		mSecondDay = -1;
		mSecondMonth = -1;
		mFirstMonth = -1;
	}
}

bool CheckValidDonation::isValidDonation()
{
	//check month
	if ((mSecondMonth + 12) - (mFirstMonth + 12) >= 6 || (mFirstMonth + 12) - (mSecondMonth + 12) >= 6)
	{
		return true;
	}
	else
	{
		return false;
	}
}