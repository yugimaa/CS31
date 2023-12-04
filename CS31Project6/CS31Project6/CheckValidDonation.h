#pragma once
#include<iostream>
#include"BloodDonation.h"
#include"VacationAccount.h"
using namespace std;

class CheckValidDonation
{
private:
	int mFirstMonth;
	int mFirstDay;
	int mSecondMonth;
	int mSecondDay;

public:
	CheckValidDonation(BloodDonation donation1, BloodDonation donation2);
	bool isValidDonation();
};