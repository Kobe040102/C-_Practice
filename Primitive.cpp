#include <iostream>
using namespace std;

/****************************  
    * Character type
*****************************/
int main() {

char middle_intial = 'D';

cout << "My middle inital is " << middle_intial << endl;

/****************************   
    *Integer types 
*****************************/

unsigned short int exam_score = 55; // same as unsigned short exam_score = 55
cout << "My exam score was " << exam_score << endl;

int countries_represented = 65;
cout << "There were " << countries_represented << " Countries represented in my meeting" << endl;


long people_in_flordia = 2610000;
cout << "There are about " << people_in_flordia << " people on earth " << endl;

long long distance_to_alpha_centauri = 9461000000000;
cout << "The distance to alpha centanuri is " << distance_to_alpha_centauri << " kilometers" << endl;

/****************************   
    *Floating point types
*****************************/

float car_payment = 401.23;
cout << "My car payment is " << car_payment << endl; 

double pi = 3.14159;
cout << "Pi is" << pi << endl;

long double large_amount = 2.7e120;
cout << large_amount << "is a very big number" << endl;

/****************************
     *Boolean types
*****************************/

bool game_over= true;
cout << "The value of gameover " << game_over << endl;

/****************************
     *Overflow example
*****************************/

short value1 = 30000;
short value2 = 1000;

int sum = value1 * value2;

cout << "The sum of " << value1 << " and " << value2 << " is " << sum << endl;

return 0;








}

