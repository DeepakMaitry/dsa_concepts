#include <iostream>
#include <vector>

using namespace std;

int main() {

    // creation 
    /*
    vector<int> marks; // vector with no size

    vector<int> miles(10); // vector of size 10

    vector<int> distances(15, 0); // vector of size 15 all values are zero 
    */

    // Member Functions
    // .begin()
    // iterator is standard way to traverse over container 

    // marks.begin() pointing to first element 
    // marks.end() pointing just after last element

    /************************************** */

    vector<int> marks(5,-1); // size 5 all element value -1

    cout << *(marks.begin()) << endl;

    return 0;
}