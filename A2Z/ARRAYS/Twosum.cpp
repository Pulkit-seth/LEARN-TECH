#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int comp = target - nums[i];
        if (mpp.find(comp) != mpp.end())
        {
            return {mpp[comp], i};
        }
        mpp[nums[i]] = i;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to " << target << " are: " << result[0] << " and " << result[1];
    }
    else
    {
        cout << "No two numbers add up to " << target;
    }
    return 0;
}
