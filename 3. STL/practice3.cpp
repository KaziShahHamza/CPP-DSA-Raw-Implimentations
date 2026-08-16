// Topic Name: vector pair

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    vector<pair<int, int>> p;
    vector<pair<string, int>> p2;
    
    p.push_back({12, 14});
    p.push_back({15, 19});
    p.push_back({21, 23});

    p2.push_back({"A+", 83});
    p2.push_back({"A", 74});
    p2.push_back({"A+", 92});

    for (auto pair : p) {
        cout << pair.first << " " << pair.second << endl;
    }

    cout << endl;

    for (auto x:p2) {
        cout << x.first << " " << x.second << endl;
    }
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}