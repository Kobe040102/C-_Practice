#include <iostream>
using namespace std;

/*   
Frank's Carpet Cleaning Service
Charge $30 per room
Sales tax rate is 6%
Estimate are valid for 30 days

Prompt the user for the number of rooms they would like cleaned and
provide an estimate such as:

Estimate for carpet cleaning service: 
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6 

====================================================

Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
Prompt the user to enter the number of rooms
Display number of rooms
Display price per room

Display cost: (number of rooms * price per room)
Display tax: (number of rooms * price per room * tax rate)
Display Total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
Display estimate expiration time


*/

int main() {

    cout << "Hello, welcome to Frank's Carpet cleaning serivce!" << endl; 
    
    int number_of_rooms = 0;

    cout << "How many rooms would you liked cleaned today: ";
    
    cin >> number_of_rooms;

    cout << "Estimate for carpet cleaning service" << endl;
    
    cout << "number of rooms: " << number_of_rooms << endl;

    const double price_per_room = 32.50;

    cout << "price per room: " << "$" << price_per_room << endl;

    int cost = price_per_room * number_of_rooms;

    cout << "Cost: " << "$" << cost << endl;

    const double Taxes = 0.06;
    
    double tax = price_per_room * number_of_rooms * Taxes;
    
    cout << "Tax: $" << tax << endl;

    cout << "===================================" << endl;

    double Total_estimate = (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * Taxes);

    cout << "estimated cost: $" << Total_estimate << endl;

    const int estimate_expiry = 30;

    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    

    return 0;

}