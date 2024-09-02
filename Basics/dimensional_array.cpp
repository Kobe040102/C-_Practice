#include <iostream>
#include <string>
using namespace std;

int main() {

    // const int row = 6;
    // const int cols = 5;

    // int movie_ratings[row][cols] = {
    //     {3, 4, 5, 6, 54},
    //     {7, 8, 9, 10, 89},
    //     {11, 12, 13, 14, 74},
    //     {15,16,17,18, 92},
    //     {19,20,21,22, 100},
    //     {23,24,25,26, 150},

    // };

    // for(int i = 0; i < row; i++) {
    //     for(int j = 0; j < cols; j++){
    //         cout << movie_ratings[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    const int row = 2;
    const int col = 2;

    string movies[row][col] = {
        {"Spider-man", "Transformers"},
        {"Aliens", "Bugs Life"},
    };

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++){

            cout << movies[i][j];

            if(j < col -1){
            cout << ", ";
            } 
        }
        
    }


    return 0;

}