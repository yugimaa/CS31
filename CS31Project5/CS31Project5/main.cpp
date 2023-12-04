//Yugo Imanishi
//ID: 106008457


#include<iostream>
#include"PlaneFlight.h"
#include"FrequentFlyerAccount.h"
using namespace std;


int main() {
	//Objects
	PlaneFlight test1("Yugo Imanishi", "YVR", "LAX", 500, 100);
	PlaneFlight test2("Yugo Imanishi", "LAX", "NRT", 1200.00, 200);
	PlaneFlight test3("Big Bird", "JFK", "YYZ", 300, 10);
	FrequentFlyerAccount account1("Yugo Imanishi");
	FrequentFlyerAccount account2("Big Bird");


	// Print values as initial checl


	//Change/set mileage for test1 (should chnage)
	cerr << "Test 1: " << test1.mName << " " << test1.mFromCity << " to " << test1.mToCity << " $" << test1.mCost << " (" << test1.mMileage << " miles)" << "\n";
	test1.setMileage(200);
	test1.setCost(300);
	cerr << "Test 1: " << test1.mName << " " << test1.mFromCity << " to " << test1.mToCity << " $" << test1.mCost << " (" << test1.mMileage << " miles)" << "\n";

	//change to/from city as the same locatoon (should not change)
	test1.setToCity("YVR");
	test1.setFromCity("LAX");
	cerr << "Test 1: " << test1.mName << " " << test1.mFromCity << " to " << test1.mToCity << " $" << test1.mCost << " (" << test1.mMileage << " miles)" << "\n";

	//change to/from city should change
	cerr << "Test 2: " << test2.mName << " " << test2.mFromCity << " to " << test2.mToCity << " $" << test2.mCost << " (" << test2.mMileage << " miles)" << "\n";
	test2.setToCity("HND");
	cerr << "Test 2: " << test2.mName << " " << test2.mFromCity << " to " << test2.mToCity << " $" << test2.mCost << " (" << test2.mMileage << " miles)" << "\n";

	//adding flights yugo
	cerr << account1.getName() << ": " << account1.mBalance << "\n";
	account1.addFlightToAccount(test1);
	account1.addFlightToAccount(test2);
	account1.addFlightToAccount(test3);
	cerr << account1.getName() << ": " << account1.mBalance << "\n";

	//adding big bird
	cerr << account2.getName() << ": " << account2.mBalance << "\n";
	account2.addFlightToAccount(test1);
	account2.addFlightToAccount(test2);
	account2.addFlightToAccount(test3);
	cerr << account2.getName() << ": " << account2.mBalance << "\n";


	//free flight Yugo
	cerr << "Test 1: " << test1.mName << " " << test1.mFromCity << " to " << test1.mToCity << " $" << test1.mCost << " (" << test1.mMileage << " miles)" << "\n";
	cerr << account1.getName() << ": " << account1.mBalance << "\n";
	account1.freeFlight("LAX", "HND", 300, test1);
	cerr << "Test 1: " << test1.mName << " " << test1.mFromCity << " to " << test1.mToCity << " $" << test1.mCost << " (" << test1.mMileage << " miles)" << "\n";
	cerr << account1.getName() << ": " << account1.mBalance << "\n";

	//free flight big bird should not change
	cerr << "Test 3: " << test3.mName << " " << test3.mFromCity << " to " << test3.mToCity << " $" << test3.mCost << " (" << test3.mMileage << " miles)" << "\n";
	cerr << account2.getName() << ": " << account2.mBalance << "\n";
	account2.freeFlight("LAX", "HND", 300, test3);
	cerr << "Test 3: " << test3.mName << " " << test3.mFromCity << " to " << test3.mToCity << " $" << test3.mCost << " (" << test3.mMileage << " miles)" << "\n";
	cerr << account2.getName() << ": " << account2.mBalance << "\n";

	//incorrect input
	cerr << "Test 2: " << test2.mName << " " << test2.mFromCity << " to " << test2.mToCity << " $" << test2.mCost << " (" << test2.mMileage << " miles)" << "\n";
	test2.setCost(-100);
	test2.setMileage(0);
	test2.setName(""); //would not accept
	test2.setFromCity("TEST"); //would change
	test2.setToCity("TEST"); //would not change becuase 

	cerr << "Test 2: " << test2.mName << " " << test2.mFromCity << " to " << test2.mToCity << " $" << test2.mCost << " (" << test2.mMileage << " miles)" << "\n";
}
