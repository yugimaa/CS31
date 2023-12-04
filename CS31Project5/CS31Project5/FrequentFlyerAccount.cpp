//Yugo Imanishi
//ID: 106008457



#include<iostream>
#include"PlaneFlight.h"
#include"FrequentFlyerAccount.h"
using namespace std;

FrequentFlyerAccount::FrequentFlyerAccount(string name)
{
	if (name.size() > 0)
	{
		mName = name;
	}
}

//balance
double FrequentFlyerAccount::getBalance()
{
	return mBalance;
}

//name
string FrequentFlyerAccount::getName()
{
	return mName;
}

//adding flights to account and increasing balance
bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight)
{
	//compares the name attribute of the PlaneFlight with mName of the account. Returns true if flight can be added, false if not. 
	if (flight.getName() == mName)
	{
		mBalance = mBalance + flight.getMileage();
		return true;
	}
	else
	{
		return false;
	}
}

//check to see if you can earn free flight
bool FrequentFlyerAccount::canEarnFreeFlight(double mileage)
{
	if (mileage <= mBalance)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//free flight 
bool FrequentFlyerAccount::freeFlight(string from, string to, double mileage, PlaneFlight &flight)
{
	if (canEarnFreeFlight(mileage) == true)
	{
		mBalance = mBalance - mileage;
		flight.mName = mName;
		flight.mFromCity = from;
		flight.mToCity = to;
		flight.mCost = 0;
		flight.mMileage = mileage;
		return true;
	}
	else
	{
		return false;
	}
}