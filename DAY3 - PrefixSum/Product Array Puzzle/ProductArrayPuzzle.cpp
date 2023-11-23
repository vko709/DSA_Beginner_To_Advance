#include<iostream>
#include<vector>
using namespace std;

vector<int> puzzle(int n, vector<int> &a){
    int p = 1;
    for(int i=0;i<n;i++){
        p *= a[i];
    }
    vector<int>v;
    for(int i=0;i<n;i++){
        int ans = p/a[i];
        v.push_back(ans);
    }
    return v;
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
    vector<int>ans;
    ans = puzzle(n,v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}