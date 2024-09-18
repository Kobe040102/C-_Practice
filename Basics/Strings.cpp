#include<iostream>
#include <string>
using namespace std;

int main() {
    // string s1;
    // string s2 = {"Kobe"};
    // string s3 = {s2};
    // string s4 = {"Kobe", 3};
    // string s5 = {s3, 0 ,2};
    // string s6 = {3, 'X'};

    // cout << s1 << endl;
    // cout << s2 << endl;
    // cout << s3 << endl;
    // cout << s4 << endl;
    // cout << s5 << endl;
    // cout << s6 << endl;

    // substr example
    // string s1 = {"This is a test"};

    // cout << s1.substr(0,4) << endl;
    // cout << s1.substr(5,2) << endl;
    // cout << s1.substr(8,10) << endl;

    // find method example
    string s1 = {"this is a test"};

    cout << s1.find("this") << endl;
    cout << s1.find("is") << endl;
    cout << s1.find("test") << endl;
    cout << s1.find("e") << endl;
    cout << s1.find("is", 4) << endl;
    cout << s1.find("XX") << endl;


    return 0;
}