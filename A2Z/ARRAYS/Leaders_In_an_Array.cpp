#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<int> leadersInArray(int arr[], int n) {
    int maxi = INT_MIN;
    vector<int> leaders;
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] >= maxi) {
            leaders.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    return leaders;
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter elements" << endl;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result = leadersInArray(arr, n);
    cout << "Leaders in the array are: ";
    for(int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
    cout << endl;
}

