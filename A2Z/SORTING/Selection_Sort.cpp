#include <iostream>
#include <algorithm>  // for std::swap
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter size of Array\n";
    cin >> n;                       // ✅ read n first

    int arr[1000];                  // or use dynamic allocation if n can be large
    cout << "Enter the elements of Array\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
