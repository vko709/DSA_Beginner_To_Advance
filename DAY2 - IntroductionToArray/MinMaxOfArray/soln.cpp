#include<iostream>
#include<vector>
using namespace std;

int minAndMax(int n, int a[]){
    int min = a[0];
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i]; 
    }
    return min + max;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<minAndMax(n,a)<<"\n";
    return 0;
}