#include <iostream>
using namespace std;

int main(){
    
    int T;
    int H, W, N;
    int roomNum=0;

    cin>>T;

    for(int i=0; i<T; i++){
        cin>>H>>W>>N;
        if(N%H==0){
            roomNum=H*100+(N/H);
        }
        else {
            roomNum= (N%H)*100 + (N/H)+1;
        }
        cout<<roomNum<<"\n";    
    }
    return 0;
}