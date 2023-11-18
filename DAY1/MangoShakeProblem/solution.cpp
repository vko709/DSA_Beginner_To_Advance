#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int totalMangoSlices = (a * 3) + b;
    int noOfMangoShakes = totalMangoSlices/2;
    cout<<noOfMangoShakes<<"\n";
    return 0;
}