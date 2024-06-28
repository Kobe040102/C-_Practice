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

    vector <int> test_scores = {100, 95, 60, 32, 10, 82};

    cout << "Here is the size of the vector " << test_scores.size() << endl; // Show the size of the vector

    int integer = 200;
    
    integer.push_back(test_scores.at(0)); // Added element within the vector

    cout << "Added element! Here is the size of the array " << test_scores.size() << endl; 

    cout << test_scores[0] << endl;
    
    cout << test_scores[1] << endl;
    
    cout << test_scores[2] << endl;
    
    cout << test_scores[3] << endl;
    
    cout << test_scores[4] << endl;
    
    cout << test_scores[5] << endl;
    
    cout << test_scores[6] << endl;

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
    




    return 0;

}