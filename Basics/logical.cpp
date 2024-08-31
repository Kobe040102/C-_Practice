#include <iostream>

using namespace std;

int main() {
    
    // int num;
    // const int lower = 10;
    // const int upper = 20;

    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ":";
    // cin >> num;

    // bool within_bounds = false;

    // within_bounds = (num >= lower&&num <= upper);
    // cout << num << " is between " << lower << " and " << upper << " :" << within_bounds << endl;


    // cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    // cin >> num;

    // bool outside_bounds = false;
    // outside_bounds= (num < lower || num > upper);
    // cout << num << "is outside " << lower << " and " << upper << " : " << outside_bounds << endl;

    // cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    // cin >> num;

    // bool on_bounds = (num == lower || num == upper);
    // on_bounds=(num == lower || num == upper);
    // cout << num << "is on one of the bounds which are "<< lower << " and " << upper << " : " << on_bounds << endl;

    // bool wear_coat = false;
    // double temperature;
    // int wind_speed;

    // const int wind_speed_for_coat = 25;
    // const double temperature_for_coat = 45;

    // cout << "\nEnter the current temperature in (F):";
    // cin >> temperature;
    // cout << "Enter windspeed in (mph):";
    // cin >> wind_speed;

    // wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    // cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    // wear_coat = (temperature < temperature_for_coat&&wind_speed > wind_speed_for_coat);
    // cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

    // cout << endl;

    // Checks if out of range 
    // int num;
    // bool range;

    // cout << "Please input a number between 10 and 20: ";

    // cin >> num;

    // if(num >= 10 && num <= 20) {
    //     range = true;
    //     cout << "true! Number is in range.";
    // } else {
    //     range = false;
    //     cout << "false! Number is out of range.";
    // }

    // Check for multiple conditions
    bool discount;
    char student;
    char senior;
    int purchase;

    cout << "Are you a student? ";
    
    cin >> student;

    if(student == 'Y'){
        cout << "You are elgiable for a discount!";
        discount = true;
    } else if(student == 'N'){
        cout << "That's fine! Are you a senior citizen and have you made a purchase of $50 or more? ";
        cin >> senior;
        cin >> purchase;
    } else if(senior == 'Y' && purchase >= 50) {
        cout << "You are elgiable for a discount!";
        discount = true;
    } else if(senior == 'N') {
        cout << "Sorry you do not qualify for the discount";
        discount = false;
    } else {
        cout << "Does not compute. ERROR!";
    }

    return 0;

}