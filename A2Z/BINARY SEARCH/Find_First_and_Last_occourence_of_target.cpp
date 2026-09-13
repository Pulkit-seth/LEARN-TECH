#include <iostream>
#include <vector>
using namespace std;
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int n = nums.size();

        // Find first occurrence
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                first = mid;
                high = mid - 1;  // keep searching in left half
            }
        }

        // Find last occurrence
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                last = mid;
                low = mid + 1;  // keep searching in right half
            }
        }

        return {first, last};
    }
    
int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8; 
    vector<int> result = searchRange(nums, target);
    cout << "First and Last Occurrence of " << target << ": [" << result[0] << ", " << result[1] << "]" << endl; // Output: [3, 4]
    return 0;
}
