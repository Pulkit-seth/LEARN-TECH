#include<iostream>
#include<vector>
using namespace std;
int findUniqueElement(vector<int> &arr)
{
    int uniqueElement = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        uniqueElement ^= arr[i];
    }
    return uniqueElement;
}
int main()
{
    vector<int> arr = {2, 3, 5, 4, 5, 3, 4};
    int uniqueElement = findUniqueElement(arr);
    cout << "The element that appears only once in the array is " << uniqueElement;
    return 0;
}
