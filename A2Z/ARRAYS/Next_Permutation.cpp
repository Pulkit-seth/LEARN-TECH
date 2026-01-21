#include<iostream>
using namespace std;
#include<algorithm>
void NextPermutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        swap(arr[i], arr[j]);
    }
    reverse(arr + i + 1, arr + n);
}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter elements" << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    NextPermutation(arr, n);
    cout << "The next permutation is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}