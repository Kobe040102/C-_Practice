#include <iostream>
#include <vector>
using namespace std;

int main() {
    // while(true) {
    //     char again;
    //     cout << "Do you want to loop again? (Y/N): ";
    //     cin >> again;

    //     if(again == 'N' || again == 'n')
    //         break;
    // }

    // Display the 2d vector
    vector<vector<int>> vector_2d = {
        {1,2,3},
        {10,20,30,40},
        {100,200,300,400,500}
    };

    for (auto vec: vector_2d){
        for(auto val: vec) {
            cout << val << " ";
        }
        cout << endl;
    }
    

}