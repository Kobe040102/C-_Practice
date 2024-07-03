#include <iostream>
using namespace std;

/* 
    Increment operator++
    Decrement operator--

    Increment or decrements its operend by 1
    Can be used with integers, floating point types and pointers

    Prefix ++num
    Posfix num++

    Don't reuse this operator
*/


int main() {

    int counter = 10;
    int result = 0;

    // // Example 1 - simple increment
    // cout << "Counter: " << counter << endl; // result 10

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl; // result 11

    // counter++;
    // cout << "Counter: " << counter << endl; // result 12

    // ++counter;
    // cout << "Counter: " << counter << endl; // result 13

    // counter++;
    // cout << "Counter: " << counter << endl; // result 14

    // cout << "\n";

    // // Example - preincrement
    //  counter = 10;
    //  result = 0; 

    //  cout << "Counter: " << counter << endl;

    //  result = ++counter; // Notes the pre increment
    //  cout << "Counter: " << counter << endl;
    //  cout << "Result: " << result << endl;

    //  // Example 4
    //  counter = 10;
    //  result = 0;

    //  cout << "Counter: " << counter << endl;
    //  result = ++counter + 10;

    //  cout << "Counter: " << counter << endl;
    //  cout << "Result: " << result << endl;

    // Example 5
    counter = 10; // 11
    result = 0; // 20 

    cout << "Counter: " << counter << endl;
    result = counter++ + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result:  " << result << endl;

    cout << endl;
    
    return 0;



}