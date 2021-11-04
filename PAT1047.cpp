//
// Created by lenovo on 2021/10/28.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e4+10;
struct team{
    string teamAnum;
    int score;
}a[N];


int findtema(string s){
    string temp="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='-'){
            temp+=s[i];
        }
        else{
            break;
        }
    }
    int res= atoi(temp.c_str());
    return res;
}
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    vector<int> team(1001);
    for(int i=1;i<=n;i++){
        cin>>a[i].teamAnum>>a[i].score;
    }

    for(int i=1;i<=n;i++){
        int temp= findtema(a[i].teamAnum);
        team[temp]+=a[i].score;
    }
    int j,max=0,seq=0;
    for(j=0;j<1001;j++){
        if(team[j]>max){
            max=team[j];
            seq=j;
        }
    }
    cout<<seq<<" "<<max;


    return 0;
}
