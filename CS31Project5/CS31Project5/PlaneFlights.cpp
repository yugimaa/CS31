//Yugo Imanishi
//ID: 106008457



#include<iostream>
#include"PlaneFlight.h"
using namespace std;


//definitions of the constructors initialized in PlaneFlight.h
//gets inputs and sends each attributes to its respective set function to validate each input.
//if it is valid input, mBlank is set as the input. If not, -1 is set as mBlank instead.
PlaneFlight::PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage)
{
	//PlaneFlight will always validate input before setting it as mAttribute.
	setCost(cost);
	setMileage(mileage);
	setName(passengerName);
	if (fromCity != toCity)
	{
		setFromCity(fromCity);
		setToCity(toCity);
	}
}

//Cost
void PlaneFlight::setCost(double cost)
{
	if (cost >= 0)
	{
		mCost = cost;
	}
	else
	{
		mCost = -1;
	}
}
double PlaneFlight::getCost()
{
	return mCost;
}

//Mileage
void PlaneFlight::setMileage(double mileage)
{
	if (mileage > 0)
	{
		mMileage = mileage;
	}
	else
	{
		mMileage = -1;
	}
}
double PlaneFlight::getMileage()
{
	return mMileage;
}

//Name
void PlaneFlight::setName(string name)
{
	if (name.size() > 0)
	{
		mName = name;
	}
}
string PlaneFlight::getName()
{
	return mName;
}

//From City
void PlaneFlight::setFromCity(string fromCity)
{
	if (fromCity.size() > 0 && fromCity != mToCity)
	{
		mFromCity = fromCity;
	}
}
string PlaneFlight::getFromCity()
{
	return mFromCity;
}

//To City
void PlaneFlight::setToCity(string toCity)
{
	if (toCity.size() > 0 && toCity != mFromCity)
	{
		mToCity = toCity;
	}
}
string PlaneFlight::getToCity()
{
	return mToCity;
}

