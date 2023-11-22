#include<iostream>
#include<vector>
using namespace std;

bool isPerfectSquare(int n){
    for(int i=1;i*i<=n;i++){
        if(i*i==n){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<isPerfectSquare(n)<<"\n";
    return 0;
}