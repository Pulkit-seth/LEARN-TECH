#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(), piles.end());
        
        int lo = 1, hi = piles[n-1];
        
        int min_s = lo + (hi-lo)/2 ;

        while (lo<hi) {
            int tem = 0;
            min_s = lo + (hi-lo)/2 ;
            // cout << lo << ' ' << min_s << ' ' << hi << '\n';
            for (int x:piles) {
                tem += (x+min_s-1)/min_s;
            }
            if (tem<=h) hi = min_s;
            else lo = min_s+1;
        }
        
        return lo;
    }

    int main() {
        vector<int> piles = {3,6,7,11};
        int h = 8;
        int result = minEatingSpeed(piles, h);
        cout << result << endl; // Output: 4
        return 0;
    }
