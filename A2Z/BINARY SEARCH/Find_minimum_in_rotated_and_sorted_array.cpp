#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {
    //    int mini = INT_MAX;
      int n = nums.size();
      int l = 0, r= n-1;
      while (l < r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] > nums[r])
            l = mid + 1;   // min is in right half
        else
            r = mid;       // min is at mid or left of mid
    }
    return nums[l];
}

int main() {
    vector<int> nums = {3,4,5,1,2};
    int result = findMin(nums);
    cout << result << endl; // Output: 1
    return 0;
}