// 169. Majority Element
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int num = -1;
    int count = 0;

    for(int i=0; i<arr.size(); i++){
        if(count == 0){
            num = arr[i];
            // count++;
        }
        if(arr[i] == num){
            count++;
        }
        else
            count--;
    }
    return num; 
}

int main(){
    vector<int> arr = {6,5,5};
    cout << majorityElement(arr);
    return 0;
}