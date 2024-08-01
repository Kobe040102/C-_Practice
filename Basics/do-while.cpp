#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // string name;
    // int age;
    // char selection;

    // do {
    //     cout << "Hello! Can I have your name and age please: ";
            
    //     cin >> name >> age;
        
    //     cout << "is this correct? " << endl;

    //     cin >> selection;

    // } while(selection == 'N' || selection == 'n'); 
    //     cout << "Thank you! Your name is " <<  name << " and your age is " << age;
    
    char selection;
    do {
        cout << "\n---------------------" << endl;
        cout << "1.Do this" << endl;
        cout << "2.Do that" << endl;
        cout << "3.Do something else" << endl;
        cout << "Q.Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        if(selection == '1') {
            cout << "\nDo this";
        } else if(selection == '2') {
            cout << "\nDo that";
        } else if(selection == '3') {
            cout << "\nDo something else";
        }
        
    } while(selection != 'q' && selection != 'Q');

    return 0;
}