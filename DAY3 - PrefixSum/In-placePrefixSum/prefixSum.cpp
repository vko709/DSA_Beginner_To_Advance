#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int>&a){
    for(int i=1;i<a.size();i++){
        a[i] += a[i-1];
    }
    
}

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // vector<int>ans;
    prefixSum(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}