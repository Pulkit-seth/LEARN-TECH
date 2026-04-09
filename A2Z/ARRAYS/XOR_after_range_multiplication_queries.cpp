#include <bits/stdc++.h>


using namespace std;

int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int mod=1000000007;
        
        for(auto &t:queries){
            int l=t[0];
            int r=t[1];
            int k=t[2];
            int v=t[3];
            int idx=l;
            while(idx<=r){
                long long temp=nums[idx];
                nums[idx]=(temp*v)%mod;
                idx+=k;
            }
        }
    
          int ans=0;
        for(int num:nums){
            ans^=num;
        }
        return ans;
        

   }
   int main(){
    vector<int> nums={1,2,3,4,5};
    vector<vector<int>> queries={{0,4,1,2},{0,3,2,2},{0,3,1,2}};
    cout<<xorAfterQueries(nums,queries)<<endl;
    return 0;
   }
