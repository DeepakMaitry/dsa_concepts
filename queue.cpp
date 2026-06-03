#include <iostream>
#include <queue>

using namespace std;

int main() {

    // creating queue 
    queue<int> q;

    //insertion

    q.push(10);
    q.push(20);
    q.push(30);

    // size of queue
    cout << "Size of queue: " << q.size() << endl;
    // front element
    cout << "Front element: " << q.front() << endl;
    // back element
    cout << "Back element: " << q.back() << endl;
    // deletion
    q.pop();
    



    return 0;
}