#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int Xor1 = 0, Xor2 = 0;
    for (int i = 1; i <= n; i++)
    {
        Xor1 ^= i;
    }
    for (int i = 0; i < n; i++)
    {
        Xor2 ^= nums[i];
    }
    return Xor1 ^ Xor2;
}
int main()
{
    vector<int> nums = {3, 0, 1, 2, 5, 6};
    cout << "The missing number is " << missingNumber(nums);
    return 0;
}
