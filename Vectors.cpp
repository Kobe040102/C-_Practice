#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    vector<char> vowels = {'a','i','o', 'u'};

    vector <int> test_scores = {100,98,89,85,93};

    vector<double> hi_temp (365, 80.0);
    
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "First score at index 1: " << test_scores[1] << endl;
    cout << "First score at index 2: " << test_scores[2] << endl;
    cout << "First score at index 3: " << test_scores[3] << endl;
    cout << "First score at index 4: " << test_scores[4] << endl;

    return 0;

}