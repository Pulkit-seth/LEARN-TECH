#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &v)
{
    int n = v.size();
    int temp = v[0];
    for (int i = 1; i < n; i++)
    {
        v[i - 1] = v[i];
    }
    v[n - 1] = temp;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Before Rotate" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    leftRotate(v);
    cout << "After Rotate" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
