#include <iostream>
#include <vector>
using namespace std;
int maxConsecutiveOnes(vector<int> &nums)
{
    int maxcnt = 0;
    int cnt = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            cnt += 1;
            maxcnt = max(maxcnt, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxcnt;
}
int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "The maximum consecutive ones are " << maxConsecutiveOnes(nums);
    return 0;
}