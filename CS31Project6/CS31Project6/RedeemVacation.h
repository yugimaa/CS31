#pragma once
#include<iostream>
#include"BloodDonation.h"
#include"VacationAccount.h"
using namespace std;

class RedeemVacation {
private:
	int mID;
	int mVacationDays;
	int mDays;
	int mBalance;
public:
	RedeemVacation(VacationAccount account, int days);
	int getRedeemedVacationDays();
	bool canRedeemVacation();

	friend class VacationAccount;
};