#include<iostream>
#include<vector>
using namespace std;

int sumOfFactors(int num){
    int sum = 1;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            int res = num/i;
            if(res==i){
                sum+=i;
            }else{
                sum = sum+i+res;
            }
        }
    }
    return sum;
}

bool isPerfectNum(int num){
    int res = sumOfFactors(num);
    if(num == res){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    cin>>num;
    cout<<isPerfectNum(num)<<"\n";
    return 0;
}