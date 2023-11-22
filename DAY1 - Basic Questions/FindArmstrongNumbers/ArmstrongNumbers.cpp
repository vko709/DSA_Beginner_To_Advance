#include<iostream>
#include<vector>
using namespace std;

vector<int> countArmstrongNumbers(int n){
    vector<int>v;
    for(int i=1;i<=n;i++){
        int n = i;
        int sum = 0;
        while(n){
            int z = n%10;
            int zpow = z*z*z;
            sum+=zpow;
            n/=10;
        }
        if(sum == i)
            v.push_back(i);
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>v = countArmstrongNumbers(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    return 0;
}