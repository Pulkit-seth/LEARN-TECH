#include<iostream>
#include<cmath>
using namespace std;
 bool isPerfectSquare(int num) {
        long long  n = ceil(sqrt(num));
        if( num == (long long ) n * n ) return true;
        return false;
    }


int main() {    int num = 18;
    bool result = isPerfectSquare(num);
    cout << (result ? "true" : "false") << endl; // Output: false
    return 0;
}