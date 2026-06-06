#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;



void printDouble(int a){
    cout << 2*a << " " << endl;
}

bool checkEven(int a){
    return a%2 == 0;;
}
int main() {


    vector<int> arr(6);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 100;
    arr[4] = 50;
    arr[5] = 50;

    
    // cout << "before" << endl;
    // for(int a : arr){
    //     cout << a << " ";
    // }
    // rotate(arr.begin(), arr.begin()+3, arr.end());
    // cout << endl;

    // cout << "after" << endl;

    // for(int a : arr) {
    //     cout << a << " ";
    // }
    // cout << endl;

    // sort(arr.begin(), arr.end());

    // for(int a: arr) {
    //     cout << a << " ";
    // }

    // reverse(arr.begin(), arr.end());

    // for(int a: arr) {
    //     cout << a << " ";
    // }




    // int ans = count_if(arr.begin(), arr.end(), checkEven);

    // cout << ans << endl; // 5

    


    // int target = 10;
    // int ans = count(arr.begin(), arr.end(), target); // returns 0 or 1
    // cout << ans << endl;

    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout << *it << endl;

    // for_each(arr.begin(), arr.end(), printDouble);

    // int target = 40;
    // auto it = find(arr.begin(), arr.end(), target);

    // cout << endl << *it << endl;
    return 0;
}