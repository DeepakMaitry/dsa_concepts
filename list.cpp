#include <iostream>
#include<list>
using namespace std;

int main() {

    list<int> myList;

    //insertion 
    myList.push_back(10);
    myList.push_back(9);
    myList.push_back(3);
    
    myList.push_front(3);
    
    // cout << myList.size();

    // myList.pop_back();
    // myList.pop_front();
    
    list<int>::iterator it = myList.begin();

    while(it != myList.end()){
        
        cout << *it << " ";
        it++;
    }
    

    return 0;
}