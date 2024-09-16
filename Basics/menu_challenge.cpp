#include <iostream>
#include <vector>
using namespace std;
// Menu challenge
int main() {
    vector<int> data = {45,12,22,90,18};
    char selection;
    int addNum;
    double sum = 0;
    double mean = 0;
    int min = 0;
    int max = 0;
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
    cout << "C - Clear list" << endl;
    cout << "Q - Quit" << endl;
    
    cout << "Enter your choice: ";
    cin >> selection ;
    // Print all elements in list
    if(selection == 'P' || selection == 'p'){
        if(data.empty()){
            cout << "[] - the list is empty";
        } else {
            for(int i = 0; i < data.size(); i++){
            cout << " " << data[i];
        }
    }
    // Add number to vector
    } else if(selection == 'A' || selection == 'a'){
         cout << "Please add a number to the list: ";
         cin >> addNum;
         data.push_back(addNum);
         cout << "Number has been added!" << endl;
    // Display the mean
    } else if(selection == 'M' || selection == 'm'){
        if(data.empty()) {
            cout << "Unable to calulate the mean - no data";
    }   else {
         for(int m = 0; m < data.size(); m++){
         sum += data[m];
        }
        mean = sum / static_cast<double>(data.size());
        cout << "The mean is: " << mean;
    }
    // Show smallest number
    } else if(selection == 'S' || selection == 's') {
        min = data[0];
        for(int small = 0; small < data.size(); small++) {
            if(data[small] < min){
                min = data[small];
            }
        }
        cout << min << endl;
    // Show the largest number
     } else if(selection == 'L' || selection == 'l') {
        max = data[0];
        for(int large = 0; large < data.size(); large++) {
            if(data[large] > max) {
                max = data[large];
            }
        }
        cout << max << endl;
    // Clears the list of numbers 
     } else if(selection == 'C' || selection == 'c') {
         data.clear();
         cout << "All the numbers has been cleared";
     } else if(selection == 'Q' || selection == 'q') {
         cout << "You quit the program. Goodbye!";
     } else {
         cout << "Unknown selection, Please try again" << endl;
     }
    } while(selection != 'Q' && selection != 'q');
    

    return 0;
}