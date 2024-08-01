#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string name;
    int age;
    char selection;

    do {
        cout << "Hello! Can I have your name and age please: ";
            
        cin >> name >> age;
        
        cout << "is this correct? " << endl;

        cin >> selection;

    } while(selection == 'N' || selection == 'n'); 
        cout << "Thank you! Your name is " <<  name << " and your age is " << age;
    

    return 0;
}