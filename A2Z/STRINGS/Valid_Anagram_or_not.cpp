#include<iostream>
#include<algorithm>
using namespace std;
bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t) << endl;
    return 0;
}
