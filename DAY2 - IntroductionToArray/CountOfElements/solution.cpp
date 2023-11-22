#include<iostream>
#include<vector>
using namespace std;

int countOfElements(int n, int a[]){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==max){
            count++;
        }
    }
    return n-count;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<countOfElements(n,a)<<"\n";
    return 0;
}