// Topic Name: longestCommonPrefix

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    // string s = "leetcode";
    vector<string> str = {"flower", "flow", "flight"};

    // string s2 = "";

    string prefix = str[0];

    // for (string x:str) {
    //     cout << x << endl;
    // }
    
    // cout << str[0][0] << endl;

    // if ( 1 == 1){
    //     s2 += str[0][0];
    // }

    // cout << "s2: " << s2 << endl;

    // cout << "str[1] length: " << str[0].length() << endl;
    // cout << "str[1]: " << str[0] << endl;

    for (int i=0; i<str.size(); i++){
        // cout << str[0][k];
        // cout << "in k iteration: " << k << endl;

        // bool ok = false;

        int j = 0;
        while (j < min(str[i].length(), prefix.length())) {
            // cout << "in i iteration: " << i << endl;
            // cout << "true. " << endl;
            // for (int j = 0; j < str[i].length(); j++) {
                // cout << "in j iteration: " << j << endl;
                if (str[i][j] != prefix[j]) {
                    break;
                } 

            // }
            j++;
        }
        prefix = prefix.substr(0, j);
        // if (ok) s2 += str[0][k];

    }

    cout << "prefix: " << prefix;
    cout << endl;

    // cout << "str size: " << str.size() << endl;



    cout << endl;
    
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}