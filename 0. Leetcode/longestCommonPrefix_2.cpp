// Topic Name: longestCommonPrefix

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;

    vector<string> strs = {"flower", "flow", "flight"};

    sort(strs.begin(), strs.end());

    for (string x:strs) {
        cout << "strs: " << x << endl;
    }

    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}