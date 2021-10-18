//
// Created by lenovo on 2021/10/15.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
struct People{
    string name;
    string birthday;
    People(string name,string birthday){
        this->name=name;
        this->birthday=birthday;
    }
};


bool cmp(People a,People b){
    return a.birthday<b.birthday;
}
int main(){
    int n,j=1;
    cin>>n;
    string name,birth;
    vector<People> P;
    string early="1814/09/06";
    string last="2014/09/06";
    for(int i=1;i<=n;i++){
        cin>>name>>birth;
        if(birth>=early  && birth<=last){
            P.push_back(People(name,birth));
        }
    }
    cout<<P.size();
    if(P.size()>0){
        sort(P.begin(),P.end(),cmp);
        cout<<" "<<P.front().name<<" "<<P.back().name;
    }
    return 0;
}
