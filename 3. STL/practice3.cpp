// Topic Name: vector pair

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    vector<pair<int, int>> p;
    
    p.push_back({12, 14});
    p.push_back({15, 19});
    p.push_back({21, 23});

    for (auto pair : p) {
        cout << pair.first << " " << pair.second << endl;
    }
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}