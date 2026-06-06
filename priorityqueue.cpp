#include <iostream>
#include <queue>

using namespace std;

int main() {

    // creation
    priority_queue<int> pq;
    // max-heap -> maximum value -> Highest Priority

    pq.push(10);
    pq.push(25); // 25 , 10
    pq.push(55); // max value highest priority top 
    pq.push(21);  // 55 25 21 10

    // top element -> Highest priority element
    cout << pq.top() << endl; //55

    pq.pop(); // highest priority element -> pop
    // 5 ko pop krdia 
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << pq.size() << endl;

    if(pq.empty() == true) {
        cout << "PQ is empty" << endl;
    } 
    else {
        cout << "PQ is not empty" << endl;
    }

   // no clear element 

   // swap can be done 

   // hamesha maximum element pop hoga 

   //top hamesha max element dega 

   // min-heap
   priority_queue<int,vector<int>,greater<int> > pq; // min heap create karliya 

   // min-heap -> minimum value -> highest priority 

   pq.push(100);
   pq.push(50);
   pq.push(75);

   cout << pq.top() << endl;// 50 min-heap 

   pq.pop(); // 50 

   cout << pq.top() << endl; // 75 

   pq.pop();

   // heapify  priority queue

    return 0;
}