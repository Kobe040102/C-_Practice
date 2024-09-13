#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // // Outer loop prints each number the amount of times of the inner val 
    //  for(int outer_val = 1; outer_val <= 10; outer_val++) {
    // // Inner loop prints the numbers consecutively
    //      for(int inner_val = 1; inner_val <= 10; inner_val++) {
    //          cout << outer_val << ", " << inner_val << endl;
    //      }
    //  }

    // for(int num1 = 1; num1 <= 10; num1++){
    //     for(int num2 = 1; num2 <= 10; num2++ ) {
    //         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    //     }
    //     cout << "------------------" << endl;
    // }

    // int grid[5][3] = {{1,2,3},
    //                 {4,5,6},
    //                 {7,8,9},
    //                 {10,11,12},
    //                 {13,14,15}};

    // for(int row = 0; row < 5; row++){
    //     for(int col = 0; col < 3; col++){
    //         cout << grid[row][col] << ", ";
    //     }
    //     cout << endl;
    // }

    string names[4][3] = {
        {"Kobe","Michelle","Emily"},
        {"John", "Sonic", "Ruby"},
        {"Mike", "Gabe", "Steven"},
        {"Annie", "Dennis", "Koda"}
    };

    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 3; col++){

            if(col == 2){
                cout << names[row][col] << " ";
            } else {
                cout << names[row][col] << ", ";
            }
        }
        cout << endl;
    }
    
}