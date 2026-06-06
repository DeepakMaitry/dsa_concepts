// #include <iostream>
// #include <queue>

// using namespace std;

// int main() {


//     // creation 
//     deque<int> dq;

//     // insertion
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(20);

//     dq.push_front(40);
//     dq.push_front(40);

//     dq.pop_front();
//     dq.pop_back();

//     /*
//     cout << dq.size() << endl; 

//     cout << dq.front() << " " <<  dq.back() << endl;

//     if(dq.empty() == true) {
//         cout << "Deque is empty" << endl;
//     } else {
//         cout << "deque is not empty" << endl;
//     }

//     */

//     deque<int>::iterator it = dq.begin();

//     while(it != dq.end()) {
//         cout << *it << " ";
//         it++;
//     }

//     cout << endl;
//     cout << dq[0] << endl;
//     // or also 
//     cout << dq.at(0) << endl;

//     cout << dq.size() <<endl;

//     dq.clear(); // dq is empty

//     cout << dq.size() << endl;

//     dq.insert(dq.begin(), 1010);
//     cout << dq.at(0) << endl;

//     dq.erase(dq.begin(), dq.end());

//     //  Priority queue next


//     return 0;
// }

#include <iostream>
#include <queue>

using namespace std;


int main() {
    // creation 
    deque<int> dq;

    // insertion
    dq.push_back(10);
    //10
    dq.push_back(20);
    //10,20
    dq.push_back(40);
    // 10, 20, 40
    dq.push_front(100);
    // 100,10,20,40

    dq.push_front(200);
    //200,100,10,20,40
    dq.push_front(300);
    // 300, 200 , 100 , 10, 20, 40

    dq.pop_front();
    // 200,100,10,20,40

    dq.pop_back();
    // 200 , 100, 10,20

    cout << dq.size() << endl;
    dq.clear();

    cout << dq.size() << endl;

    dq.insert(dq.begin(), 101);
    cout << dq[0] << endl;
    cout << dq.size() << endl;
    dq.erase(dq.begin(), dq.end());
    cout << dq.size() << endl;
    // cout << dq[0] << endl;
    // cout << dq[1] << endl;
    // cout << dq.at(3) << endl;
    // iterator 
    
    // deque<int>::iterator it = dq.begin();

    // while(it != dq.end()) {
    //     cout << *it << " ";
    //     it++;
    // }

    // cout << dq.size() << endl; // 4

    // cout << dq.front() << endl;
    // cout << dq.back() << endl;

    // if(dq.empty() == true) {
    //     cout << "Deque is emtpy" << endl;
    // } else {
    //     cout << "Deque is not empty" << endl;
    // }





    return 0;
}