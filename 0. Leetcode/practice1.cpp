// Topic Name: 27. Remove Element

#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << endl;
    cout << "--- Output Starts Here ---" << endl;
    cout << endl;
    
    vector<int> nums = {2, 4, 3, 2, 3, 6, 2, 3};
    int val = 3, k = 0;
    vector<int> nums2;

    // cout << "nums.size(): " << nums.size() << endl;
    
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i] == val) {
            nums[i] = 200;
            k++;
        }
    }

    cout << "nums: ";
    for (int x:nums) {
        cout << x << " ";
    }
    cout << endl;
    

    // sort(nums.begin(), nums.end());
    sort(nums.begin(), nums.end());

    // reverse(nums.begin(), nums.end());
    
    // for (int x:nums) {
    //     cout << x << " ";
    // }

    // cout << endl;


    // for (int i = 0; i < nums.size(); i++) {
    //     if (nums[i] != 0) {
    //         nums2.push_back(nums[i]);
    //     }
    // }

    // cout << "nums2: ";
    // for (int x:nums2) {
    //     cout << x << " ";
    // }
    // cout << endl;

    // cout << "nums: ";
    // for (int x:nums) {
    //     cout << x << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < nums2.size(); i++) {
    //     nums[i] = nums2[i];
    // }

    cout << "nums: ";
    for (int x:nums) {
        cout << x << " ";
    }
    cout << endl;
    
    
    while (k != 0){
        nums.pop_back();
        k--;
    }

    k = nums.size();

    cout << "k size: " << k << endl;
    
    cout << "nums: ";
    for (int x:nums) {
        cout << x << " ";
    }
    cout << endl;
    
    // cout << "nums.size(): " << nums.size() << endl;
    
    cout << endl;
    cout << "--- Output Ends Here ---" << endl;
    cout << endl;
    return 0;
}