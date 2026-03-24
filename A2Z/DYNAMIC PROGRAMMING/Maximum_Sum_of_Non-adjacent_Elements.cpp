#include <iostream>
#include <vector>
using namespace std;

int maxSum(vector<int>& nums, vector<int>& dp, int index) {
    if (index >= nums.size()) {
        return 0; // Base case: nothing left to pick
    }
    if (dp[index] != -1) {
        return dp[index];
    }

    // Include current element, skip next (jump by 2)
    int include = nums[index] + maxSum(nums, dp, index + 2);
    // Exclude current element, move to next (jump by 1)
    int exclude = maxSum(nums, dp, index + 1);

    dp[index] = max(include, exclude);
    return dp[index];
}

int main() {
    vector<int> nums = {3, 2, 7, 10};
    vector<int> dp(nums.size(), -1);
    int result = maxSum(nums, dp, 0);
    cout << "Maximum sum of non-adjacent elements: " << result << endl;
    return 0;
}