#include<iostream>
#include<vector>
using namespace std;

     bool search(vector<int>& nums, int target) {
     

        int n = nums.size();
        int l = 0, r=n-1;
        while(l <= r){
            // int mid = l + (r-l)/2;
            if(nums[l] == target) return true;
            else if(nums[r] == target) return true;
            l++;
            r--;
        }
    return false;

    }

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    bool result = search(nums, target);
    cout << result << endl;
    return 0;
}
