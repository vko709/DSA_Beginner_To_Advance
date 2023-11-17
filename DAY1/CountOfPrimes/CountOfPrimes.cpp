#include<iostream>
#include<vector>
using namespace std;



bool isPrime(int n){
    int fact = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i){
                fact+=1;
            }else{
                fact+=2;
            }
        }
        if(fact>2){
            break;
        }
    }
    if(fact>2)
        return false;
    return true;
}

int countOfPrimes(int n){
    int count = 0;
    for(int i=2;i<=n;i++){
        if(isPrime(i))
            count++;
    }
    return count;
}

int main(){
    int num;
    cin>>num;
    cout<<countOfPrimes(num)<<"\n";
    return 0;
}
