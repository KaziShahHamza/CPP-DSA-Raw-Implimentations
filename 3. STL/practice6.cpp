// Topic Name: unordered map

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    // vector<int> nums = {2, 3, 2, 5, 3, 2};
    // vector<char> nums2 = {'a', 'b', 'a', 'c', 'a', 'b'};

    // unordered_map<char, int> freq;

    // for (int x : nums2) {
    //     freq[x]++;
    // }
    
    // for (auto x : freq) {
    //     // if (x.second > 1) {
    //         cout << x.first << " " << x.second << endl;
    //     // }
    // }

    unordered_map<int, int> student;

    student[4] = 80;
    student[6] = 75;
    student[3] = 95;
    
    for (auto x : student) {
        // if(x.first == "Hasan") {
            cout << x.first << " " << x.second << endl;
        // }
    }
    
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}