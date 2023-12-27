#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct Info {
    int age;
    int index;
    string name;
    Info(int age,int index, string name) : age(age), index(index), name(name) {}
};

bool comp(Info a, Info b) {
   if(a.age == b.age){
    return a.index < b.index;
   }
   else {
    return a.age<b.age;
   }
}

int main() {
    int N;
    cin >> N;
    int Age;
    string Name;

    vector<Info> v;

    for (int i = 0; i < N; i++) {
        cin >> Age >> Name;
        v.push_back(Info(Age, i, Name));
    }
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < N; i++) {
        cout << v[i].age << " " << v[i].name << "\n";
    }

    return 0;
}
