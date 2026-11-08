// Topic Name: map

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    map<string, int> mp;

    mp["bb"] = 100;
    mp["ba"] = 200;
    mp["bc"] = 300;
    
    // mp[3]++;
    // mp[5] += 20;

    // for (int i = 0; i < 10; i++) {
    //     cout << mp[i] << " ";
    // }
    
    // cout << endl;
    // int a = mp.count(2);
    // cout << "a: " << a << endl;

    // mp.erase(5);

    // for (int i = 0; i < 6; i++) {
    //     cout << mp[i] << " ";
    // }
    
    cout << endl;
    cout << endl;
    
    cout << "map output: " << endl;
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }


    
    // for(auto x : mp) {
    //     cout << x << " ";
    // }

    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}