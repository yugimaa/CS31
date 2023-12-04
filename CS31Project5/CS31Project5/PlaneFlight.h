//Yugo Imanishi
//ID: 106008457


#pragma once
#include<iostream>
using namespace std;


class PlaneFlight 
{
	//access
public:
	//attributes
	double mCost, mMileage;
	string mFromCity, mToCity, mName;

	PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage);

	double getCost();
	void setCost(double cost);

	double getMileage();
	void setMileage(double mileage);

	string getName();
	void setName(string name);

	string getFromCity();
	void setFromCity(string fromCity);

	string getToCity();
	void setToCity(string toCity);

};