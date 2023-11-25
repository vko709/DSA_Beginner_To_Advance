#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 
vector<int> LeaderInArray(int n, int a[]){
    vector<int>v;
    int max = a[n-1];
    v.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(max<a[i]){
            max = a[i];
            v.push_back(max);
        }
    }
    return v;
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  vector<int>v;
  v = LeaderInArray(n,a);
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<"\n";
  return 0;
}