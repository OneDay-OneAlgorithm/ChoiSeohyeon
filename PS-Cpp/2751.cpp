#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int N, temp;
    vector<int> a;
    cin>>N;

    for(int i=0; i<N; i++){
        cin>>temp;
        a.push_back(temp);
    }

    for(int i=0; i<N; i++){
        cout<<a[i]<<"\n";
    }
}