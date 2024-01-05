#include <iostream>
using namespace std;

bool palindrome(string str){
    for(int i=0; i<str.size()/2; i++){
        if(str[i] != str[str.size()-1-i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    while (1)
    {
        cin >> str;
        if(str == "0") break;     
        if(palindrome(str)){
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }
    return 0; 
}
