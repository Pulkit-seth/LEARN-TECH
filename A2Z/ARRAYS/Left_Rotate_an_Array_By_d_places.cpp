#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void leftRotate(vector<int> &v, int d)
{
    int n = v.size();
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.end());
    reverse(v.begin(), v.end());
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int d = 4;
    cout << "Before Rotate" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    leftRotate(v, d);
    cout << "After Rotate" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
