#include <iostream>
#include <string>
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
    // enum Color {
    //     red, green, blue
    // };
    // Color screen_color = red;

    // switch(screen_color) {
    //     case red: cout << "Choose red";
    //         break;
    //     case green: cout << "Choose green";
    //         break;
    //     case blue: cout << "Choose blue";
    //         break;
    //     default: cout << "Choose no color";
    // }

    // int day;

    // cout << "Please input the a day of the week from 1 to 7: ";

    // cin >> day;

    // switch(day) {
    //     case 1 : cout << "Monday";
    //     break;
    //     case 2: cout << "Tuesday";
    //     break;
    //     case 3: cout << "Wednesday";
    //     break;
    //     case 4: cout << "Thursday";
    //     break;
    //     case 5: cout << "Friday";
    //     break;
    //     case 6: cout << "Saturday";
    //     break;
    //     case 7: cout << "Sunday";
    //     break;
    //     default: cout << "invalid input";
    // }

    int lines;

    cout << "Please choose one of the following lines: ";

    cin >> lines;

    switch(lines) {
        case 1 : cout << " I love you so much!";
        break;
        case 2 : cout <<  "You are my best friend!";
        break;
        case 3 : cout << "Please listen to your mother!";
        break;
        case 4 : cout << "Feed your dog tonight!";
        break;
        case 5 : cout << "Goodbye, see you later";
        break;
        default: cout << "Invaild response";
    }


    return 0;
}