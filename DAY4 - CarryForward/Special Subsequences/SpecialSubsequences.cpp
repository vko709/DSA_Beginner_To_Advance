#include<iostream>
#include<vector>
#define ll long long
using namespace std;
 
ll specialSequence(string s){
  ll num = 1000000007;
  ll count = 0;
  int n = s.size();
  ll ans = 0;
  for(int i=n-1;i>=0;i--){
    if(s[i] == 'G'){
      count++;
    }
    else if(s[i] == 'A'){
      ans += count;
      ans %= num;
    }
  }
  return ans;
}

int main(){
  string s;
  cin>>s;
  cout<<specialSequence(s)<<"\n";
  return 0;
}