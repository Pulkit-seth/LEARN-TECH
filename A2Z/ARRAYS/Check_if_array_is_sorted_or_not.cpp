#include<iostream>
using namespace std;
#include<vector>

bool isSorted( int n, vector<int> v){
    for(int i = 0; i < n-1; i++){
    if(v[i] > v[i+1]) return false;
    }
return true;}
int main(){
    vector<int> v = {1, 3, 5, 7, 9, 11, 13, 15, 17, 18};
    int n = v.size();

     if (isSorted(n, v))
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
     return 0;
}

