#include<iostream>
#include<vector>
using namespace std;
void rearrange(vector<int> &arr){
    vector<int> pos;
    vector<int> neg;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    int i = 0, j = 0, k = 0;
    while(i < pos.size() && j < neg.size()){
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }
    while(i < pos.size()){
        arr[k++] = pos[i++];
    }
    while(j < neg.size()){
        arr[k++] = neg[j++];
    }
}

int main(){
    vector<int> arr = {3, -2, 5, -1, 4, -3, 2, -4};
    rearrange(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}