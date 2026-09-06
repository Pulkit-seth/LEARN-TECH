int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int low = 1, high = arr[n-1];
        
        int min_s = low + (high-low)/2 ;

        while (low<high) {
            int tem = 0;
            min_s = low + (high-low)/2 ;
            // cout << lo << ' ' << min_s << ' ' << hi << '\n';
            for (int x:arr) {
                tem += (x+min_s-1)/min_s;
            }
            if (tem<=k) hi = min_s;
            else low = min_s+1;
        }
        
        return low;
    }
