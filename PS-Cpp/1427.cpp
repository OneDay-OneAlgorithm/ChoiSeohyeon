#include <iostream>
using namespace std;

int main(){
    string num;
    cin>>num;

    int count[10] = {0,};

    for(int i=0; i<num.length(); i++){
        char val = num[i];
        int index = val - '0';
        count[index]++;
    }

    for(int i=9; i>=0; i--){
        for(int j=0; j<count[i]; j++){
            cout<<i;
        }
    }
    return 0;
}