#include<iostream>
#include<vector>
using namespace std;

    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size(), cnt =0;
        for(int i =0; i<n; i++){
            if(word.find(patterns[i]) != string::npos) cnt++;
        }
        return cnt;
    }

    int main() {
        vector<string> patterns = {"a", "abc", "bc", "d"};
        string word = "abc";
        int result = numOfStrings(patterns, word);
        cout << result << endl; // Output: 3
        return 0;
    }
