//Yugo Imanishi
//ID: 106008457

#pragma once
#include<iostream>
#include"BloodDonation.h"
using namespace std;

class VacationAccount {
private:
	int mID;
	double mBalance;
	int mDonationNumber;
	void setmBalance(double balance);

public:
	VacationAccount(int EmployeeID);
	double getBalance();
	int getID();
	bool addVacationToAccount(BloodDonation donation);

	//new

	friend class RedeemVacation;
};