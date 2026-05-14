#include<iostream>
using namespace std;
#include<algorithm>


int LargestInArray(int arr[], int n){
    sort(arr, arr+n);
    return arr[n-1];
}

int main() {
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"The largest element in Array is "<<LargestInArray(arr, n)<<endl;

}
