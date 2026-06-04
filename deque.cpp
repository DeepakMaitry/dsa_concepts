#include <iostream>
#include <queue>

using namespace std;

int main() {


    // creation 
    deque<int> dq;

    // insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(20);

    dq.push_front(40);
    dq.push_front(40);

    dq.pop_front();
    dq.pop_back();

    /*
    cout << dq.size() << endl; 

    cout << dq.front() << " " <<  dq.back() << endl;

    if(dq.empty() == true) {
        cout << "Deque is empty" << endl;
    } else {
        cout << "deque is not empty" << endl;
    }

    */

    deque<int>::iterator it = dq.begin();

    while(it != dq.end()) {
        cout << *it << " ";
        it++;
    }

    cout << endl;
    cout << dq[0] << endl;
    // or also 
    cout << dq.at(0) << endl;

    cout << dq.size() <<endl;

    dq.clear(); // dq is empty

    cout << dq.size() << endl;

    dq.insert(dq.begin(), 1010);
    cout << dq.at(0) << endl;

    dq.erase(dq.begin(), dq.end());

    //  Priority queue next


    return 0;
}