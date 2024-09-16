#include <iostream>
#include <vector>
using namespace std;
// Menu challenge
int main() {
    vector<int> data;
    char selection;
    do {
    cout << "Please choose from the following menu!" << endl;
    cout << "Menu options: " << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest" << endl;
    cout << "Q - Quit" << endl;
    
    cout << "Enter your choice: ";
    cin >> selection ;

    if(selection == 'P' || selection == 'p'){

    }
    
    } while(selection != 'Q' && selection != 'q');
    cout << "You quit the program. Goodbye!";

    







    return 0;
}