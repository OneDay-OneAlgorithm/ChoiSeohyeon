#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Info{
    string name;
    int korean, math, english;
    Info(string name, int korean, int english, int math):name(name),korean(korean),english(english),math(math){}
};
bool comp(Info a, Info b){
    if(a.korean==b.korean && a.math==b.math && a.english==b.english){
        return a.name<b.name;
    }
    if(a.korean==b.korean && a.english==b.english){
        return a.math>b.math;
    }
    if(a.korean==b.korean){
        return a.english<b.english;
    }
    return a.korean>b.korean;
}
int main(){
    int N; cin>>N;
    string a;
    int b,c,d;
    vector<Info> v;

    for(int i=0; i<N; i++){
        cin>>a>>b>>c>>d;
        v.push_back(Info(a,b,c,d));
    }
    sort(v.begin(), v.end(),comp);

    for(int i=0; i<N; i++){
        cout<<v[i].name<<"\n";
    }

    return 0;
}