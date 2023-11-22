#include<iostream>
#include<vector>
using namespace std;

vector<long long> RangeSumQuery(int n, vector<int>&a, vector<vector<int> >&b){
    long long prefixSum[a.size()+1];
    int m = b.size();
    prefixSum[0] = a[0];
    for(long long i=1;i<=a.size();i++){
        prefixSum[i] = prefixSum[i-1]+a[i];
    }
    vector < long long > ans(m);
    for (int i = 0; i < m; i++) {
        ans[i] = prefixSum[b[i][1]] - (b[i][0] > 0 ? prefixSum[b[i][0] - 1] : 0);
    }
    return ans;
}

int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    int m;
    cin>>m;
    vector<vector<int> >b(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            int x;
            cin>>x;
            b[i].push_back(x);
        }
    }
    vector<long long>v;
    v = RangeSumQuery(n,a,b);
    for(long long i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}