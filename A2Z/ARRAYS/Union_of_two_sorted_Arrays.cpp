#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> Union(vector<int> &v1, vector<int> &v2)
{
    int m = v1.size();
    int n = v2.size();
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        st.insert(v1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        st.insert(v2[i]);
    }
    vector<int> unionvec;
    for (auto it : st)
    {
        unionvec.push_back(it);
    }
    return unionvec;
}

int main()
{
    vector<int> v1 = {12, 33, 43, 64, 212, 3, 1};
    vector<int> v2 = {12, 9, 43, 98, 21, 30, 1};

    vector<int> res = Union(v1, v2);
    cout << "The union of both the vectors is ";
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}