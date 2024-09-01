// Arrays
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {

// char vowels[] = {'a','e','i','o','u'};

// cout << "\nThe first vowel is: "<<vowels[0] << endl;

// cout << "The last vowels is: " <<vowels[4] << endl;

// cin >> vowels[1];

// cout << "The second vowel is: " << vowels[1] << endl;

// double hi_temps[] = {90.1,89.8,77.5,81.6};

// cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

// hi_temps[0] = 100.7;

// cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

// int test_scores [5] = {100, 90, 80, 70, 60};

// cout << "The first score index 0: " << test_scores[0] << endl;

// cout << "The second score index 1: " << test_scores[1] << endl;

// cout << "The third score index 2: " << test_scores[2] << endl;

// cout << "The fourth score index 3: " << test_scores[3] << endl;

// cout << "The Fifth score index 4: " << test_scores[4] << endl; 

// cout << test_scores << endl; // Displays memeory address

// vector<string> fruits = {"Apple", "Banna", "orange", "grapes", "strawberry"};
// ]
// cout << "Here are the list of fruits: ";

// for(int i = 0; i < fruits.size(); i++){

//     cout << fruits[i];
// }

vector<string> fruits = {"Orange", "Apple", "Grapes", "Strawberry", "Banna", "Peach"};
string result = "";

for(int i = 0; i < fruits.size(); i++) {
    result += fruits[i]; //Appending the fruit names

    if(i < fruits.size() -1) {
       result += ", "; 
    }


}
    cout << "The fruits are: " << result;





return 0;
}