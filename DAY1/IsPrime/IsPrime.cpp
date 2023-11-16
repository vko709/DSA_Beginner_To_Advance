#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int a){
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
        if(fact>2)break;
    }
    if(fact>2)return false;
    return true;
}

// time complexity of isPrime is = O(sqrt(a))

int main(){
    int a;
    cin>>a;
    if(isPrime(a)){
        cout<<a<<" is a prime number";
    }
    else{
        cout<<a<<" is not a prime number";
    }
    return 0;
}