// /*
// associative container that stores key value pairs

// allows efficent retrieval and modification of values based on keys 

// keys are unique within the map */

// #include <iostream>
// #include <map>
// #include <unordered_map>


// using namespace std;

// int main() {

//     // multiple key value pairs 

//     /*
//     // creation
//     unordered_map<string,string> table;
//     // constant time 

//     // insertion 
//     table["in"] = "India";

//     cout << table.at("in") << endl;
//     table.at("in") = "India2"; // updated
//     table["in"] = "India3"; // updated
//     cout << table.at("in") << endl;

//     table.insert(make_pair("en", "England"));

//     pair<string,string> p;
//     p.first = "br";
//     p.second = "brazil";
//     table.insert(p);

//     cout << table.size() << endl;

//     // table.clear();

//     cout << table.size() << endl;

//     if(table.empty() == true) {
//         cout << "map is empty" << endl;
//     } else {
//         cout << "map is not empty" << endl;
//     }

//     unordered_map<string,string>::iterator it = table.begin();

//     while(it != table.end()) {
//        pair<string,string> p = *it;
//        cout << p.first << " " << p.second << endl;
//        it++;
//     } 


//     cout << table.size() << endl;

//     // table.erase(table.begin(), table.end());

//     // cout << table.size() << endl;


//     if(table.find("in") != table.end()) {
//         cout << "Key found" << endl;
//     } else {
//         cout << "Key not found" << endl;
//     }

//     if(table.count("in") == 0) {
//         cout <<  "Key not found" << endl;
//     } else {
//         cout << "key found" << endl;
//     }

//     */

//     map<int,string> table;

//     table.insert(make_pair(1, "India"));

//     table.insert(make_pair(2, "China"));

//     table.insert(make_pair(3, "America"));

//     map<int,string>::iterator it = table.begin();

//     while(it != table.end()) {
//         pair<int, string> p = *it;
//         cout << p.first << " " << p.second << endl;
//         it++;
//     }

//     return 0;
// }


//################################################################

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<string, string> table;
    // table["in"] = "India";
    table.insert(make_pair("in", "India"));

    cout << table.at("in") << endl;
    table.at("in") = "India2";
    table["in"] = "India3";
    cout << table.at("in") << endl;

    unordered_map<string, string>::iterator it = table.begin();
    while(it != table.end()) {
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    /*// creation

    // insertion
    table["in"] = "India";
    table.insert(make_pair("en", "England"));

    pair<string,string> p;
    p.first = "br";
    p.second= "Brazil";
    table.insert(p);


    cout << table.size() << endl;
    table.clear();
    cout << table.size() << endl;

    if(table.empty() == true) {
        cout << "map is empty" << endl;
    }
    else{
        cout << "map is not empty";
    }
    

    cout << table.at("in") << endl;
    table.at("in")= "india2";
    cout << table.at("in") << endl;

    table["in"] = "India3";
    cout << table["in"] << endl;
*/

    // unordered_map<string,string>::iterator it = table.begin();

    // while(it!= table.end()) {
    //     cout << *it << endl;
    //     it++;
    // }

    // while(it != table.end()) {
    //     pair<string, string> p = *it;
    //     cout << p.first << " " << p.second << endl;
    //     it++;
    // }



    return 0;
}