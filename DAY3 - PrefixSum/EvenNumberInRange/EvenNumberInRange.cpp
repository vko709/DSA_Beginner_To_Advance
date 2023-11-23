#include<iostream>
#include<vector>
using namespace std;

vector<long long> countOfEven(int n, vector<int> &a, vector<vector<int> > &b){
    // vector<long long>ans;
    int even[a.size()];
    for(int i=0;i<a.size();i++){
        if(a[i]%2==0)
            even[i] = 1;
        else
            even[i] = 0;
    }
    for(int i=1;i<a.size();i++){
        even[i] += even[i-1];
    }
    vector<long long>v;
    int ans=0;
    for(int i=0;i<b.size();i++){
        int l = b[i][0];
        int r = b[i][1];
        if(l==0)
            ans = even[r];
        else
            ans = even[r]-even[l-1];
        v.push_back(ans);
    }
    return v;
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
    v = countOfEven(n,a,b);
    for(long long i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}