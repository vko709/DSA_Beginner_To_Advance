#include<iostream>
#include<vector>
using namespace std;

int equilibriumIndex(vector<int> &a){
    int n = a.size();
    for(int i=1;i<n;i++){
        a[i] += a[i-1];
    }
    for(int i=0;i<n;i++){
        if(i==0 && a[n-1]==0){
            return i;
        }
        else if(a[i-1] == (a[n-1]-a[i])){
            return i;
        }
    }
    return -1;
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
    cout<<equilibriumIndex(v)<<"\n";
    return 0;
}