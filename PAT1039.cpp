//
// Created by lenovo on 2022/1/10.
//
#include<bits/stdc++.h>
using namespace std;

int a[130];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        a[s1[i]-'0']++;
    }

    for(int i=0;i<s2.size();i++){
        a[s2[i]-'0']--;
    }

    int req=0,rel=0,flag=1;
    for(int i=0;i<130;i++){
        if(a[i]<0){
            if(flag){
                flag=0;
            }
            req-=a[i];
        }
        else if(a[i]>0){
            rel+=a[i];
        }
    }
    if(flag){
        cout<<"Yes "<<rel;
    }
    else{
        cout<<"No "<<req;
    }
    return 0;
}

