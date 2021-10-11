//
// Created by lenovo on 2021/9/9.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
struct Student{
    int id;
    int lscore,hscore;
}S[N];

int n,L,H;
bool cmp(Student a,Student b){

}
int main(){

    cin>>n>>L>>H;
    for(int i=1;i<=n;i++){
        S[i].id>>S[i].lscore>>S[i].hscore;
    }
    sort(S+1,S+n+1,cmp);

    return 0;
}
