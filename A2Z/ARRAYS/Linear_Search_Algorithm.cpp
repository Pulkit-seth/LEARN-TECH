#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &v, int target)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 89, 90};
    int target;
    cout << "Enter element you want to search" << endl;
    cin >> target;
    int idx = linearSearch(vec, target);
    if (idx == -1)
        cout << "Element not present\n";
    else
        cout << " Element present at " << idx << " index";
    return 0;
}
