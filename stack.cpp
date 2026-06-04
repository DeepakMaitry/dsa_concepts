#include <iostream>
#include <stack>

using namespace std;

int main() {

    // creation 
    stack<int> st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.size() <<endl;

    st.pop();
    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop();
    
    
    return 0;
}