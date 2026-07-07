#include<bits/stdc++.h>
using namespace std;

int Max(vector<int>arr) {
    int n = arr.size();
    
    int max = INT_MIN;
    
    for(int x : arr) {
        if(x>max) 
            max = x;
    }
    
    return max;
}

int Min(vector<int>arr) {
    int n = arr.size();
    
    int min = INT_MAX;
    
    for(int x : arr) {
        if(x<min) 
            min = x;
    }
    
    return min;
}

int main(){
    vector<int> arr = {4,6,7,10,98,23,44,-23,-4};
    
    cout<<"MAX: "<<Max(arr)<<endl;
    cout<<"MIN "<<Min(arr)<<endl;

    return 0;
}