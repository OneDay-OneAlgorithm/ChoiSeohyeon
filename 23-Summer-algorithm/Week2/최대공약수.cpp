#include <iostream>
using namespace std;

//a%b가 0이면 b가 a의 최대 공약수
long long GCD(long long a, long long b){
    if(a%b == 0 ){
        return b;
    }
    return GCD(b, a%b);
}


int main(){

    long long a,b;
    cin>>a>>b;

    long long res = GCD(a,b);

    for(int i=0; i<res; i++){
        cout<<1;
    }

    return 0;
}