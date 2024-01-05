//이항 계수 1

#include<iostream>
using namespace std;

int Factorial(int num){
 if(num == 1 || num == 0){
        return 1;
        
    }else{
        return Factorial(num-1) * num;
    }
}

int main(void){

    int N,K;
    cin>>N>>K;

    cout<<Factorial(N)/(Factorial(K)* Factorial(N-K));

    return 0;
}