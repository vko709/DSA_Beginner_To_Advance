#include<iostream>
#include<vector>
using namespace std;

void occurences(int n, int a[], int b){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==b)
            count++;
    }
    cout<<count<<"\n";
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b; 
    cin>>b;
    occurences(n,a,b);
    return 0;
}