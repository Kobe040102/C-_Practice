#include <iostream>
#include <vector>
using namespace std;
// Menu challenge
int main() {
    vector<int> data;
    char selection;
    int addNum;
    double sum = 0;
    double mean = 0;
    do {
    cout << " " << endl;
    cout << "--------------------------------------" << endl;
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
        if(data.empty()){
            cout << "[] - the list is empty";
        } else {
            for(int i = 0; i < data.size(); i++){
            cout << " " << data[i];
        }
    }
    } else if(selection == 'A' || selection == 'a'){
         cout << "Please add a number to the list: ";
         cin >> addNum;
         data.push_back(addNum);
         cout << "Number has been added!" << endl;
    } else if(selection == 'M' || selection == 'm'){
        if(data.empty()) {
            cout << "Unable to calulate the mean - no data";
        } else {
         for(int i = 0; i < data.size(); i++){
             sum = sum += data[i];
             mean = sum / static_cast<double>(data.size());
         }
         cout << "The mean is: " << mean;
        }
    }
    
    } while(selection != 'Q' && selection != 'q');
    cout << "You quit the program. Goodbye!";

    







    return 0;
}