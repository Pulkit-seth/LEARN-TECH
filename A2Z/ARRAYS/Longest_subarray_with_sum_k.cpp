#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int longestSubarrayWithSumK(vector<int> &arr, int k){
    int maxlen = 0, sum = 0;
    int n = arr.size();
    unordered_map<int, int> prefixSumIndex;
    for(int i =0; i<n; i++){
         sum += arr[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
    }
    int rem = sum - k;
    if(prefixSumIndex.find(rem) != prefixSumIndex.end()){
        maxlen = max(maxlen, i - prefixSumIndex[rem]);
    }
    if(prefixSumIndex.find(sum) == prefixSumIndex.end()){
        prefixSumIndex[sum] = i;
    }
    }
    return maxlen;
}

int main(){
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int length = longestSubarrayWithSumK(arr, k);
    cout << "The length of the longest subarray with sum " << k << " is " << length;
    return 0;
}