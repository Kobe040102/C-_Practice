#include <vector>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    // vector<double> hi_temp = {36.7, 95.2};

    // cout << "First score at index 0: " << hi_temp[0] << endl;

    // cout << "First score at index 1: " << hi_temp[1] << endl;
    
    // vector<char> vowels = {'a','i','o', 'u'};
    
    // cout << "First score at index 0: " << vowels[0] << endl;

    // cout << "First score at index 1: " << vowels[1] << endl;

    // cout << "First score at index 2: " << vowels[2] << endl;

    // cout << "First score at index 3: " << vowels[3] << endl;

    // vector <int> test_scores = {100,98,89,85,93};
    
    // cout << "First score at index 0: " << test_scores[0] << endl;
    
    // cout << "First score at index 1: " << test_scores[1] << endl;
    
    // cout << "First score at index 2: " << test_scores[2] << endl;
   
    // cout << "First score at index 3: " << test_scores[3] << endl;
    
    // cout << "First score at index 4: " << test_scores[4] << endl;

    // vector <int> test_scores = {100, 95, 60, 32, 10, 82};

    // cout << "Here is the size of the vector " << test_scores.size() << endl; // Show the size of the vector

    // int integer = 200;
    
    // integer.push_back(test_scores.at(0)); // Added element within the vector

    // cout << "Added element! Here is the size of the array " << test_scores.size() << endl; 

    // cout << test_scores[0] << endl;
    
    // cout << test_scores[1] << endl;
    
    // cout << test_scores[2] << endl;
    
    // cout << test_scores[3] << endl;
    
    // cout << test_scores[4] << endl;
    
    // cout << test_scores[5] << endl;
    
    // cout << test_scores[6] << endl;

    // 2D vector
    // vector<vector<int>> movie_ratings 
    // {
    //     {1,2,4,10},
    //     {3,9,5,7},
    //     {15,100,30,60}
    // };

    // cout << "\nHere are the movie rating for reviewer #1 using array syntax: " << endl;
    // cout << movie_ratings[1][0] << endl; // Display 3
    // cout << movie_ratings[2][3] << endl; // Display 60
    // cout << movie_ratings[1][1] << endl; // Display 9
    // cout << movie_ratings[1][3] << endl; // Display 7

    // Sum all of elements
//     vector<int> nums = {1,2,3,4,5,6,7,8,9,10};

//     for(int i = 0; i < nums.size(); i++){
//     int sum = 0;
//     sum += nums[i];
// }

//     cout << "The total sum is " << sum;
    
    // // Find the max element in vector
    // vector<int> nums = {11,34,90,75,2,45};

    
    // int max = nums[0];
    
    // for(int i = 0; i < nums.size(); i++){
    //     if(nums[i] > max) {
    //         max = nums[i];
    //     }
    // }

    // cout <<  "Here is the maximum element: " << max;

    // // Reverse a vector
    // vector<int> nums = {1,2,3,4,5,6,7,8,9,10};

    // int i = 0;
    // int j = nums.size() -1;

    // while(i < j) {
    //     // Swamp the elements at i and j
    //     int temp = nums[i];
    //     nums[i] = nums[j];
    //     nums[j] = temp;
    //     // Move pointers
    //     i++;
    //     j--;
        
    // }

    // for(int k = 0; k < nums.size(); k++) {
    //     cout << nums[k] << " ";
    // }

    // Finding the minuimum element
    // vector<int> nums = {73,156,80,105,200,110,85,69,70};

    // int min = nums[0];

    // for(int i = 0; i < nums.size(); i++) {
    //     if(nums[i] < min){
    //         min = nums[i];
    //     }
    // }
    // cout <<  "The minimum element is: " << min;

    // Finding the Even numbers in the vector
    // vector<int> nums = {34, 80, 57, 13, 91, 103, 200, 85, 70, 6};

    // int sum;

    // for(int i = 0; i < nums.size(); i++) {

    //     if(nums[i] % 2 == 0){

    //         sum += nums[i];
    //     }
    // }

    // cout << sum <<endl;

    // calculating the average 
    // vector<int> nums = {25, 50, 75, 100, 125 , 15};
    // int sum = 0;
    // int totalElements = nums.size();

    // for(int i = 0; i < totalElements; i++) {
     
    //     sum += nums[i];
    // }
    // double average = static_cast<double>(sum)/totalElements;
    // cout << average;

    // Appending names
    vector<string> names = {"Kobe", "Michelle", "Gabe", "John", "Emily"};

    string result = "";

    for(int i = 0; i < names.size(); i++) {
        result += names[i];

        if(i < names.size() -1) {
            result += ", ";
        }
    }
    cout << "The names are: " << result;

    

    return 0;

}