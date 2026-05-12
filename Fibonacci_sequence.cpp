#include<iostream>
#include<vector>
using namespace std;
int fibb(int n, vector<int>& dp) {
    if(n <= 1) {
        return n;
    }
    if(dp[n] != -1) {
        return dp[n];
    }
    
    return dp[n] = fibb(n - 1, dp) + fibb(n - 2, dp);
    
}

int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << "The " << n << "th Fibonacci number is: " << fibb(n, dp) << endl;

}
