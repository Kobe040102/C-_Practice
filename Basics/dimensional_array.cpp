#include <iostream>
using namespace std;

int main() {

    const int row = 6;
    const int cols = 5;

    int movie_ratings[row][cols] = {
        {3, 4, 5, 6, 54},
        {7, 8, 9, 10, 89},
        {11, 12, 13, 14, 74},
        {15,16,17,18, 92},
        {19,20,21,22, 100},
        {23,24,25,26, 150},

    };



    cout << "This is 2D array: " << movie_ratings[5][4];


    return 0;

}