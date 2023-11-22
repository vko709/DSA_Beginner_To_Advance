#include<iostream>
#include<vector>
using namespace std;

int sqrt(int num){
    for(int i=1;i*i<=num;i++){
        if(i*i==num)
            return i;
    }
    return -1;
}
// Time complexity of sqrt function  = O(sqrt(N))
int main(){
    int num;
    cin>>num;
    cout<<sqrt(num)<<"\n";
    return 0;
}