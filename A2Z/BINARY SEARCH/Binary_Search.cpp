#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid; // Target found
        } else if (nums[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;
    int result = binarySearch(nums, target);
    if (result != -1) {
        cout << "Element " << target << " found at index: " << result << endl; // Output: Element 5 found at index: 4
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}