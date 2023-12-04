//Yugo Imanishi
//ID: 106008457

#pragma once
#include<iostream>
#include"PlaneFlight.h"
using namespace std;

class FrequentFlyerAccount
{
	//access
public:
	string mName;

	//start off as 0
	double mBalance = 0;

	FrequentFlyerAccount(string name);
	double getBalance();
	string getName();

	bool addFlightToAccount(PlaneFlight flight);

	bool canEarnFreeFlight(double mileage);
	bool freeFlight(string from, string to, double mileage, PlaneFlight &flight);
};