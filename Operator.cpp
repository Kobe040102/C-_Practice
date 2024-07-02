#include <iostream>
using namespace std;

int main() {

    // const int num1 = 10;
    // int num2 = 20;

    // num1 = 100;

    // cout << "num1 is " << num1 << endl;
    // cout << "num2 is " << num2 << endl;

    int num1 = 200;
    int num2 = 100; 
    int result = 0;
    
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;
    
    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    

    return 0;

}