#include <iostream>
#include <vector>
using namespace std;

int main () {

    // first challenge
    vector<int> vector1;

    vector1.push_back(10);
    vector1.push_back(20);
    
    vector<int> vector2;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nVector1 display: " << vector1.at(0) << " " << vector1.at(1) << " size: " << vector1.size();
   
    cout << "\nVector1 display: " << vector2.at(0) << " " << vector2.at(1) << " size: " << vector2.size();

    // second challenge

    vector<vector<int> > vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nVector 2D elements: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    // Change vector 0

    vector1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector1.at(0) << endl;

    /* 
    Based on the output when the first element was updated to 1000 in vector 1,
    it only updated within that vector and not the 2D vector because it kept the old
    element from before.
    */
       



    return 0;
}