#include <iostream>

using namespace std;

int main() {
    
    // int score;
    // cout << "Enter your score on the exam (0-100): ";
    // cin >> score;
    // char letter_grade;

    // if(score >= 0 && score <= 100) {
    //     if(score >= 90) {
    //         letter_grade = 'A';
    //     }
    //         else if(score >= 80){
    //         letter_grade = 'B';
    //         }
    //         else if(score >= 70){
    //         letter_grade = 'C';
    //         }
    //         else if(score >= 60){
    //         letter_grade = 'D';
    //         }
    //         else {
    //         letter_grade = 'F';
    //         }
        
    //     cout << "Your grade is: " << letter_grade << endl;
    //     if(letter_grade == 'F')
    //     cout << "Sorry, you repeat this class" << endl;
    //     else {
    //         cout << "Congrats!" << endl;
    //     }
    // } else {
    //     cout << "Sorry, " << score << " is not in range" << endl;

    // }

    // return 0;

    int age = 10; 
    bool has_car = false;

    if( age >= 16) { // if age is greater than or equal to 16 and has_car
        if(has_car) {
            cout << "Yes! you can drive since you have a car" << endl;
        } else {
            cout << "sorry come back when you have a car" << endl;
        }

    } else {
        int years = 16 - age;

        cout << "Please come back in " << years << " years in order to drive" << endl;
    }

}