#include <iostream>
using namespace std;

int main() {
   // Hill pattern

//    //Outer controls the rows
//    for(int i = 0; i < 5; i++){
//        //Inner loop controls spaces
//        for(int j = 0; j < 5 - i - 1; j++){
//            cout << " ";
//        }
//        //Inner loop controls number of stars
//        for(int k = 0; k < 2 * i + 1; k++){
//            cout << "*";
//        }
//        cout << endl;
//    }

   // Reverse hill pattern
   for(int i = 0; i < 5; i++){
       for(int j = 0; j < i; j++){
           cout << " ";
       }
       for(int k = 0; k < 2 * (5 - i) - 1; k++){
           cout << "*";
       }
       cout << endl;
   }

   return 0;

}