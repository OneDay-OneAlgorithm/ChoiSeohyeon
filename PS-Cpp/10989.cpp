#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, data; cin>>N;
    
    int contain[10001]={0};

    for(int i=0; i<N; i++){
        cin>>data;
        contain[data] += 1;
    }

    for(int i=0; i<10001; i++){
        for(int j=0; j<contain[i]; j++){
            cout<<i<<"\n";
        }
    } 
}