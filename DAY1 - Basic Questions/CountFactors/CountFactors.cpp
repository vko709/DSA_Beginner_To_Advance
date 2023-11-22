#include<iostream>
#include<vector>
using namespace std;

int countFactor(int a){
    int fact = 0;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            if(a/i==i){
                fact+=1;
            }
            else{
                fact+=2;
            }   
        }
    }
    return fact;
}

// time complexity for countFactor method = O(sqrt(a))
int main(){
    int a;
    cin>>a;
    cout<<countFactor(a)<<"\n";
    return 0;
}