#include <iostream>
using namespace std;

int main() {

    int num_cents;
    const int dollar_val = 100;
    const int quarter_val = 25;
    const int dime_val = 10;
    const int nickle_val = 5;
    const int pennie_val = 1;

    // cout << "Enter the amount of cents: ";
    // cin >> num_cents; // ask user the the amount 

    // int balance, dollars, quarters, dimes, nickles,pennies;

    // dollars = num_cents/dollar_val; // cents divided by 100
    // balance = num_cents - (dollars * dollar_val); // 92 - (0 * 100)

    // quarters = balance/quarter_val; // 92/25 = 3
    // balance -= quarters * quarter_val; // 3 * 25 - 92 = 17

    // dimes = balance/dime_val; // 17/10 = 1
    // balance -= dimes * dime_val; // 1 * 10 = 10

    // nickles = balance/nickle_val; // 7/5 = 1
    // balance -= nickles * nickle_val; // 1 * 5 = 5

    // pennies = balance; // 2

    // cout << "You can provide this change as follows: " << endl;
    // cout << "dollars :" << dollars << endl;
    // cout << "quarters :" << quarters << endl;
    // cout << "dimes :" << dimes << endl;
    // cout << "nickles :" << nickles << endl;
    // cout << "pennies :" << pennies << endl;



    /* Solution using the modulo operator */

    int balance,dollars,quarters,dimes,nickles,pennies = 0; 
    cout << "Enter the amount of cents: ";
    cin >> num_cents;

    dollars = num_cents/dollar_val;
    balance = num_cents%dollar_val;

    quarters = balance/quarter_val;
    balance %= quarter_val;

    dimes = balance / dime_val;
    balance %= dime_val;

    nickles = balance/nickle_val;
    balance %= nickle_val;

    pennies = balance;

    cout << "\nYou can provide this change as follows: " << endl;
    cout << "dollars :" << dollars << endl;
    cout << "quarters :" << quarters << endl;
    cout << "dimes :" << dimes << endl;
    cout << "nickles :" << nickles << endl;
    cout << "pennies :" << pennies << endl;

    cout << endl;
    return 0;



}