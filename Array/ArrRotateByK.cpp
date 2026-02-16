#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());          // Step 1
        reverse(nums.begin(), nums.begin() + k);    // Step 2
        reverse(nums.begin() + k, nums.end());      // Step 3
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;

    Solution obj;
    obj.rotate(nums, k);

    for(int x : nums)
        cout << x << " ";

    return 0;
}
