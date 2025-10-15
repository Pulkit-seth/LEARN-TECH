#include<iostream>
#include<vector>
using namespace std;
vector<int> Intersection(vector<int> &v1, vector<int> &v2)
{
    int m = v1.size();
    int n = v2.size();
    vector<int> intersectionvec;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (v1[i] < v2[j])
        {
            i++;
        }
        else if (v1[i] > v2[j])
        {
            j++;
        }
        else
        {
            intersectionvec.push_back(v1[i]);
            i++;
            j++;
        }
    }
    return intersectionvec;
}

int main()
{
    vector<int> v1 = {1, 3, 12, 33, 43, 64, 212};
    vector<int> v2 = {1, 9, 12, 21, 30, 43, 98};

    vector<int> res = Intersection(v1, v2);
    cout << "The intersection of both the vectors is ";
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}