#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // int length, width, height;
    // double base_cost = 2.50;

    // const int tier1_threshold = 100; // volume
    // const int tier2_threshold = 500; // volume

    // int max_dimension_length = 10; // inches

    // double tier1_subcharge = 0.10; // 10% extra
    // double tier2_subcharge = 0.25; // 25% extra

    // int package_volume;

    // cout << "Welcome to the package cost calculator" << endl;
    // cout << "Enter length, width, and height of the package separted by spaces: ";
    // cin >> length >> width >> height;

    // if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length ) {
    //  cout << "Sorry, package rejected - simensions exceeded" << endl;
    // } else {
    //     double package_cost;
    //     package_volume = length * width * height;
    //     package_cost = base_cost;

    //     if(package_volume > tier2_threshold) {
    //         package_cost += package_cost * tier2_subcharge;
    //         cout << " adding tier 2 subcharge" << endl;
    //     } else if(package_volume > tier1_threshold) {
    //         package_cost += package_cost * tier1_subcharge;
    //         cout << " adding tier 1 subcharge" << endl;
    //     }

    //     cout << fixed << setprecision(2);
    //     cout << "The volume of your package is: " << package_volume << endl;
    //     cout << "Your package will cost $" << package_cost << " to ship" << endl;
    // }

    double num1 = 4.5;
    double num2 = 100.89;
    double num3 = 204.70;

    cout << static_cast<int>(num2) << endl;
    return 0;


}