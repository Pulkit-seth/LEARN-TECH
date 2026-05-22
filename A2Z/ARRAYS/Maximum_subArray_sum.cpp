#include <iostream>
#include <vector>
using namespace std;
long long maxSubarraySum(vector<int> &arr)
{
    long long currentSum = 0;
    long long maxSum = INT64_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubarraySum(arr);
    return 0;
}
