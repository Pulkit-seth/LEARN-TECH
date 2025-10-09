#include<iostream>
#include<vector>
using namespace std;

int secLargest(vector<int> arr, int n){
    int largest = arr[0];
    int secLargest = -1;
    for(int i =1; i<n; i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secLargest ){
            secLargest = arr[i];
        }
    }
return secLargest;}

int main(){
    vector<int> v = {1, 2, 943, 545, 90, 78, 36};
    cout<<"The second Largest element is "<<secLargest(v, 7);
    return 0;
}