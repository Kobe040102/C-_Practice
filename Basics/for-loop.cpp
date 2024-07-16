#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // for(int i = 1; i <= 10; i++) {
    //     cout << i << endl;
    // }

    // for(int i = 10; i > 0; i-- ){
    //     cout << i << " Hello" << endl;
    // }

    // for(int i = 10; i <= 100; i+=10) {
    //     if(i % 25 == 0)
    //     cout << i << endl;
    // }

    // for(int i = 1, j = 5; i <= 5; i++, j++) {
    //     cout << i << " + " << j << " = " << (i+j) << endl;
    // }

    // for(int i =1; i <= 100; i++){
    //     cout << i;
    //     if(i % 10 == 0){
    //     cout << endl;
    //     } else {
    //     cout << " ";
    //     }
    // }

    // vector<int> nums = {10, 20, 30, 40, 50};

    // for(int i = 0; i < nums.size(); i++) {
    //     cout << nums[i] << endl;
    // }

    // int sum = 15;

    // for(int i = 1; i < sum; i++) {
    //     cout << sum << endl;
    // }
    // return sum;

//   vector<double> temps = {87.2, 77.1, 80.0, 72.5};

//    double average_temp;
//    double running_sum;

//    for(auto temp: temps)
//    running_sum += temp;

//    average_temp = running_sum / temps.size();

//    cout << average_temp << endl;

//    return average_temp;

    // int scores [] = {10,20,30};

    // for(auto score : scores) 
    // cout << score << endl;

    // vector<double> temperatures = {87.9, 77.9, 80.0, 72.5};
    // double average_temp;
    // double total;

    // for(auto temp:temperatures)
    //     total += temp;
    
    // if(temperatures.size() != 0)
    //     average_temp = total / temperatures.size();

    //     cout << fixed << setprecision(1);

    //     cout << "Average temperature is " << average_temp << endl;

    // for(auto val:{1,2,3,4,5})
    //     cout << val << endl;
    //     cout << endl;

    for(auto c: "This is a test") {
        if(c == ' ') {
            cout << "\n";
           } else {
            cout << c;
            }
        }
    cout << endl;
    return 0;
   
}