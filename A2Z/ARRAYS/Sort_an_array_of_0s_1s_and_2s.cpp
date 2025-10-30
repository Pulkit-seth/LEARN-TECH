#include<iostream>
#include<vector>
using namespace std;
void sort012(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> nums = {2, 0, 1, 2, 1, 0};
    sort012(nums);
    cout << "The sorted array is: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}