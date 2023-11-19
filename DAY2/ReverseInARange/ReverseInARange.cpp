#include<iostream>
#include<vector>
using namespace std;

void reverse(int n, int *a, int b, int c){
    int s = b, e = c;
    while(s<e){
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b,c;
    cin>>b>>c;
    reverse(n,a,b,c);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}