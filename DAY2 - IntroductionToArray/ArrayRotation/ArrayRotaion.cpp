#include<iostream>
#include<vector>
using namespace std;

void reverse(int *a, int b, int c){
    int s = b, e = c;
    while(s<e){
        int temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}

void RotatedArray(int n, int a[], int b){
    b = b%n;
    reverse(a, 0, n - 1);
    reverse(a, 0, b - 1);
    reverse(a, b, n - 1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
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
    RotatedArray(n,a,b);
    return 0;
}