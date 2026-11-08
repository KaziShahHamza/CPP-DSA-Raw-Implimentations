
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Write your solution here
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }

        }

        return {};
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    // Test Case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;

    // Test Case 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;

    // Run tests
    vector<int> result1 = sol.twoSum(nums1, target1);
    vector<int> result2 = sol.twoSum(nums2, target2);
    vector<int> result3 = sol.twoSum(nums3, target3);

    // Print results
    for (int x : result1) cout << x << " ";
    cout << endl;

    for (int x : result2) cout << x << " ";
    cout << endl;

    for (int x : result3) cout << x << " ";
    cout << endl;

    return 0;
}
