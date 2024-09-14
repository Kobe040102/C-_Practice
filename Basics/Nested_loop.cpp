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

    // string names[4][3] = {
    //     {"Kobe","Michelle","Emily"},
    //     {"John", "Sonic", "Ruby"},
    //     {"Mike", "Gabe", "Steven"},
    //     {"Annie", "Dennis", "Koda"}
    // };

    // for(int row = 0; row < 4; row++){
    //     for(int col = 0; col < 3; col++){

    //         if(col == 2){
    //             cout << names[row][col] << " ";
    //         } else {
    //             cout << names[row][col] << ", ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // Print elements in a 2D vector
    // vector<vector<int>> vector_2d {
    //     {1, 2, 3},
    //     {10, 20, 30,40},
    //     {100, 200, 300, 400, 500}
    // };

    // for(int vec = 0; vec < vector_2d.size(); vec++) {
    //     for(int val = 0; val < vector_2d[vec].size(); val++) {

    //         cout << vector_2d[vec][val] << " ";
    //     }
    //     cout << endl;
    // }

    // Addition table
    // for(int num1 = 1; num1 <= 20; num1++){
    //     for(int num2 = 1; num2 <= 20; num2++){
    //         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    //     }
    //     cout << "----------------" << endl;
    // }

    // Histogram Program
    //  int num_items = 0;
    //  cout << "How many data items do you have: ";
    //  cin >> num_items;

    //  vector<int> data;

    //  for(int i = 1; i <= num_items; i++){
    //      int data_item = 0;
    //      cout << "Enter data item " << i << ": ";
    //      cin >> data_item;
    //      data.push_back(data_item); 
    //  }
     
    // cout << "\nDisplaying Histogram" << endl;
    //  for(auto val: data){
    //      for(int i = 1; i <= val; i++){
    //          if(i % 5 == 0){
    //              cout <<"*";
    //          } else {
    //          cout << "-";
    //          }
    //      }
    //      cout << endl;
    //  }
    
    // vector<int> pairs = {4,6,8,12};
    // int result = 0;
    // for(int i = 0; i < pairs.size(); i++) {
    //     for(int j = i + 1; j < pairs.size(); j++){
    //         cout << "(" << pairs[i] << "," << pairs[j] << ")";
    //         result = result + pairs.at(i) * pairs.at(j);
    //     }
    // }

    // cout << result;

    return 0;
}