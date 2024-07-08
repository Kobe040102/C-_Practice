#include <iostream>
using namespace std;

int main() {
    
    // Example: 
    // char selection;

    // cin >> selection;

    // switch(selection) {
    //     case '1': cout << "1 selected";
    //         break;
    //     case '2': cout << "2 selected";
    //         break;
    //     case '3': cout << "3 selected";
    //         break;
    //     case '4': cout << "4 selected";
    //         break;
    //     default: cout << "1,2,3,4 Not selected";
    // }

    // enumeration
    enum Color {
        red, green, blue
    };
    Color screen_color = red;

    switch(screen_color) {
        case red: cout << "Choose red";
            break;
        case green: cout << "Choose green";
            break;
        case blue: cout << "Choose blue";
            break;
        default: cout << "Choose no color";
    }

    return 0;
}