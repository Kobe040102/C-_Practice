#include <iostream>
using namespace std;

int main() {

    int first_of_rooms = 0;

    int second_of_rooms = 0;

    const int small_rooms = 25;

    const int large_rooms = 35;

    const double Taxes = 0.06;

    cout << "Welcome to Frank's Cleaning serivce!" << endl;

    cout << "How many small rooms you want cleaned: ";

    cin >> first_of_rooms;

    double small_cost = (first_of_rooms * small_rooms );

    cout << "How many large rooms you want cleaned: ";

    cin >> second_of_rooms; 
    
    double big_cost = (second_of_rooms * large_rooms);

    cout << "=============================================" << endl;

    cout << "Estimate for carpet cleaning service" << endl;

    cout << "Number of small rooms:" << first_of_rooms << endl;

    cout << "Number of large rooms:" << second_of_rooms << endl;

    cout << "Price per small room: $" << small_rooms << endl;

    cout << "Price per small room: $" << large_rooms << endl;

    double Cost = (first_of_rooms * small_rooms) + (second_of_rooms * large_rooms);

    cout << "Cost: $" << Cost << endl;

    double Tax = Cost * Taxes;

    cout << "Tax: $" << Tax << endl;

    cout << "===============================================" << endl;
    
    double Total_estimate = Cost + Tax;

    cout << "Total estimate:$" << Total_estimate << endl;

    cout << "This estimate is valid for 30 days" << endl;

    return 0;

}