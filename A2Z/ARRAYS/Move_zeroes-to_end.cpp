#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& v)
{
    int j = -1;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (v[i] != 0)
        {
            swap(v[i], v[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> v = {1, 0, 3, 0, 9, 0, 7, 0, 9};
    cout << "Before Rotation" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    moveZeroes(v);
    cout << "After Rotation" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;

}
