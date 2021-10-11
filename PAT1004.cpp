//
// Created by lenovo on 2021/9/7.
//

#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
struct Student{
    string name;
    string id;
    int score;
}s[N];

bool cmp(Student a,Student b){
    return a.score>b.score;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].name>>s[i].id>>s[i].score;
    }
    sort(s,s+n,cmp);
    cout<<s[0].name<<" "<<s[0].id<<endl;
    cout<<s[n-1].name<<" "<<s[n-1].id;
    return 0;
}
