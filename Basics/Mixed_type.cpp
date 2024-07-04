#include <iostream>
using namespace std;

int main() {
    // // Example
    // int total_amount = 100;
    // int total_number = 8;
    // double average = 0.0;


    // average = total_amount / total_number;
    // cout << average << endl;

    // average = static_cast<double>(total_amount) / total_number;
    // cout << average << endl;

    // Mixed Type Expressions
    int num1, num2, num3;
    int sum;
    const int count = 7;

    cout << "Input 3 integers please: "; // Ask user to input 3 variables
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;

    double average = 0.0;

    average = static_cast<double> (sum) / count; // Cast the variable

    cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The average of the number is: " << average << endl;

    cout << endl;
    return 0;

}