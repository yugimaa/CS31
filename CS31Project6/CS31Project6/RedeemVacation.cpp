#include <iostream>
#include <string>
#include <cassert>
#include "BloodDonation.h"
#include "VacationAccount.h"
#include "RedeemVacation.h"
using namespace std;

//initlizaise vacation account to vacation days per ID
RedeemVacation::RedeemVacation(VacationAccount account, int days)
{
	mVacationDays = 0;
	mID = account.getID();
	mBalance = account.getBalance();
	account.mBalance = mBalance;
	if (days >= 0)
	{
		mDays = days;
	}
	else
	{
		mDays = 0;
	}
}

//returns vacation days
int RedeemVacation::getRedeemedVacationDays()
{
	return mVacationDays;
}

bool RedeemVacation::canRedeemVacation()
{
	if (mBalance >= (mDays * 24))
	{
		mVacationDays = mVacationDays + mDays;

		//subtracts day x 24hrs from account's balance (using friend)
		mBalance = mBalance - (mDays * 24);
		return true;
	}
	else
	{
		return false;
	}
}