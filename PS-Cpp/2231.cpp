#include <iostream>
using namespace std;

int BruteForce(int n){
    int sum = 0;
    while (n > 0)
    {
        sum += n %10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N; cin>>N;

    int res = 0;
    for(int i=1; i<N; i++){
        int sum = BruteForce(i);
        if(i+sum == N){
            res = i;
            break;
        }
    }
    cout<<res;
    return 0;
}