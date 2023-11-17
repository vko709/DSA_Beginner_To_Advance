#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;

int n = 100001;
bool prime[100001];

void sieve(){
    memset(prime, true, sizeof(prime));
    for(int p = 2; p * p <= n; p++){
        if(prime[p]){
            for(int i = p*p; i <= 100001; i += p){
                prime[i] = false;
            }
        }
    }
}

int countOfPrimes(int n){
    int count = 0;
    for(int i=2;i<=n;i++){
        if(prime[i])
            count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    sieve();
    cout<<countOfPrimes(n)<<"\n";
    return 0;
}