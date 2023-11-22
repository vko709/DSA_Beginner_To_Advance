#include<iostream>
#include<vector>
#include<algorithm>     
using namespace std;

vector<int> RangeSumQuery(int n, vector<int>&a, vector<vector<int> >&b){
    vector<int> v;
    int row = b.size();
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int k=b[i][0];k<=b[i][1];k++){
            sum+=a[k];
        }
        v.push_back(sum);
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
    vector<int>v;
    
    v = RangeSumQuery(n,a,b);
    for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}