#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main() {
    deque<int> dq;
    
    int n;
    cin >> n;

    string str;
    int str_num;

    for(int i = 0; i < n; i++) {
        cin >> str;

        if(str == "push_front") {
            cin >> str_num;
            dq.push_front(str_num);
        }
        else if(str == "push_back") {           
            cin >> str_num;
            dq.push_back(str_num);
        }
        else if(str == "size") {
            cout << dq.size() << "\n";
        }
        else if(str == "empty") {
            cout << dq.empty() << "\n";
        }
        else if(dq.empty()) {
            cout << "-1" << "\n";
        }
        else if (str == "pop_front") {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else if (str == "pop_back") {
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        else if(str == "front") {
            cout << dq.front() << "\n";
        }
        else if(str == "back") {
            cout << dq.back() << "\n";
        }
    }
}




