#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (v[j] != v[i])
        {
            i++;
            v[i] = v[j];
        }
    }
    v.resize(i + 1);
    return i + 1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8, 9};
    int unique = removeDuplicates(v);
    cout << "There Are " << unique << " unique elements in the vector/array.\n";
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
