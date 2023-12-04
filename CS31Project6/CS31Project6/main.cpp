//Yugo Imanishi
//ID: 106008457

#include <iostream>
#include <string>
#include <cassert>
#include "BloodDonation.h"
#include "VacationAccount.h"
#include "RedeemVacation.h"
#include "CheckValidDonation.h"
using namespace std;
int main()
{
    BloodDonation doner1(100000, 55, 135.00, 1, 30);
    BloodDonation doner2(100000, 55, 135.50, 12, 30);
    BloodDonation doner3(100000, 55, 135.50, 5, 29);
    BloodDonation doner4(100000, 55, 135.50, 5, 29);
    BloodDonation doner5(100000, 55, 135.00, 10, 30);
    BloodDonation doner6(100000, 55, 135.50, 5, 29);
    BloodDonation doner7(100000, 55, 135.50, 5, 29);
    BloodDonation doner8(100000, 55, 135.50, 5, 29);
    VacationAccount account1(100000);
    VacationAccount account2(100001);

    assert(doner1.getID() == 100000);
    assert(doner1.getAge() == 55);
    assert(doner1.getWeight() == 135.0000);
    //assert(doner1.getMonth() == 3);
    //assert(doner1.getDay() == 31);

    // account balance starts at zero...
    assert(account1.getBalance() == 0.000000);
    assert(account1.getID() == 100000);


    // Vacation adds to vacation balance
    assert(account1.addVacationToAccount(doner1) == true);
    assert(account1.getBalance() == 4.0);

    assert(account1.addVacationToAccount(doner2) == true);
    assert(account1.getBalance() == 8.0);

    assert(account1.addVacationToAccount(doner3) == true);
    assert(account1.addVacationToAccount(doner4) == true);
    assert(account1.addVacationToAccount(doner5) == true);
    assert(account1.addVacationToAccount(doner6) == true);
    assert(account1.addVacationToAccount(doner7) == true);
    assert(account1.addVacationToAccount(doner8) == true);
    assert(account1.getBalance() == 32.0);

    //testing redeem vacation feature
    RedeemVacation John(account1, 1);
    assert(John.canRedeemVacation() == true);
    assert(John.getRedeemedVacationDays() == 1);


    //testing bonus code feature
    BloodDonation doner9(100001, 55, 135.50, 5, 29, 123);
    BloodDonation doner10(100001, 55, 135.50, 5, 29);
    assert(account2.addVacationToAccount(doner9) == true);
    assert(account2.addVacationToAccount(doner10) == true);
    assert(account2.getBalance() == 16.0);

    //testing valid month
    CheckValidDonation test1(doner1, doner2);
    assert(test1.isValidDonation() == true);
}
