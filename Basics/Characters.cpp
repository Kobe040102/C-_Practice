#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {

char first_name[20] = "Kobe";
char last_name[20];
char full_name[50];
char temp[50];

cout << first_name;

char first_name_length = strlen(first_name);

// cout << "Please enter your first name: ";
// cin >> first_name;

// cout << "Please enter your last name:";
// cin >> last_name;
// cout << "---------------------------------" << endl;

// cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
// cout << last_name << " your last name has " << strlen(last_name) << " characters" << endl;

// strcpy(full_name, first_name);  // copying first_name to full_name
// strcat(full_name, " ");        // concatenate full_name and a space
// strcat(full_name,last_name);   // concatenate last_name to full_name
// cout << "Your full name is " << full_name << endl;

// cout << "-------------------------------" << endl;
// cout << "Enter your full name:";
// cin >> full_name;

// cout << "Your full name is " << full_name << endl;

// cout << "Enter a name: ";
// cin.getline(full_name,50); // Take in the full name
// cout << "Your full name is " << full_name << endl;

// cout << "------------------------" << endl;
// strcpy(temp,full_name);
// // Comparing the strings
// if (strcmp(temp,full_name) == 0){
//     cout << temp << " and " << full_name << " are the same" << endl;
// }
//     else {
//     cout << temp << " and " << full_name << " are different " << endl;
//     }
// cout << "----------------------" << endl;
// // Capitalize all letters in full_name
// for(size_t i = 0; i < strlen(full_name); i++){
//     if(isalpha(full_name[i]))
//         full_name[i] = toupper(full_name[i]);
// }
//  cout << "Your full name is " << full_name << endl;

//  cout << "------------------------------" << endl;
//  if(strcmp(temp,full_name) == 0) {
//        cout << temp << " and " << full_name << " are the same" << endl;
// }
//     else {
    
//     cout << temp << " and " << full_name << " are different " << endl;

// }
     
//     cout << "-----------------------------------" << endl;
//     cout << "Results of comparing " << temp << " and " << full_name << " : " << strcmp(temp,full_name) << endl;
//     cout << "Result of comparing " << full_name << " and " << temp << " : " << strcmp(full_name,temp) << endl;
 


 return 0;
}