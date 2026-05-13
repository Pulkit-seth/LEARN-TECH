#include<iostream>
#include<vector>
using namespace std;

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r=n-1;
        while(l <= r){
            // int mid = l + (r-l)/2;
            if(nums[l] == target) return l;
            else if(nums[r] == target) return r;
            l++;
            r--;
        }
    return -1;}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int result = search(nums, target);
    cout << result << endl;
    return 0;
}