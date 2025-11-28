#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int majorityElement(vector<int> &arr)
{
    unordered_map<int, int> countMap;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        countMap[arr[i]]++;
    }
    for (auto it : countMap)
    {
        if (it.second > n / 2)
        {
            return it.first;
        }
    }
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(arr);
    return 0;
}