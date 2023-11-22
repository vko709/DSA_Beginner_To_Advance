#include<iostream>
#include<vector>
using namespace std;

int secondLargest(int n, int a[]){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max = a[i];
    }
    int max2 = -1;
    for(int i=0;i<n;i++){
        if(a[i]>max2 && max2 !=max && a[i]<max ){
            max2 = a[i];
        }
    }
    if(max == max2)
        return -1;
    return max2;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<secondLargest(n,a)<<"\n";
    return 0;
}