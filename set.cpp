/*

sorted collection of unique elements 

elements are stored in sorted order, and duplicates are automatically removed 
provides efficient insertion deletion and search operations 
*/

// no duplicate unique element only 

// unordered set and ordered set 

#include <iostream>
#include <set>
#include <unordered_set>


using namespace std;


int main() {

    // set<int> st;
    unordered_set<int> st;

    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    cout << st.size() << endl;
    st.clear();
    cout << st.size() << endl;
    // traverse 
    unordered_set<int>:: iterator it = st.begin();

    while(it != st.end()) {

        cout << *it << " "; 
        it++;
    }

    if(st.empty()) {
        cout << "set is empty" << endl;
    } else {
        cout << "set is not empty" << endl;
    }

    st.erase(st.begin(), st.end()); // all element deleted 
    cout << st.size() << endl;

    st.insert(15);
    if(st.find(15) != st.end()) {
        cout << "found" << endl;
    } else {
        cout << "element not found" << endl;
    }   

    if(st.count(15) == 1) {
        cout << "found" << endl;
    } 
    
    if (st.count(115) == 0){
        cout <<  "not found" << endl;
    }


    return 0;
}