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

    /*
    vector<int> marks(5,-1); // size 5 all element value -1
    
    cout << *(marks.begin()) << endl;
    */

    vector<int> first;

    first.push_back(3);
    first.push_back(2);
    first.push_back(7);
    first.push_back(4);
    first.push_back(9);
    first.push_back(1);

    // creating an iterator 
    vector<int>::iterator it = first.begin();

    while(it != first.end()) {
        cout << *it << " ";
        it++;
    }

    return 0;
}