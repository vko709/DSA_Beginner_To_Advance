#include<iostream>
#include<vector>
using namespace std;

bool isGoodpair(int n, int a[], int b){
    int sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==b && i!=j)
                return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    int b;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>b;
    cout<<isGoodpair(n,a,b)<<"\n";
    return 0;
}