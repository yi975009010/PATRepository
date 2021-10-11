//
// Created by lenovo on 2021/9/7.
//
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    string s= to_string(n);
//    for(int i=0;i<s.size();i++){
//
//    }
    int len=s.size();
    if(len==3){
        for(int i=0;i<s[0]-'0';i++){
            cout<<'B';
        }
        for(int i=0;i<s[1]-'0';i++){
            cout<<'S';
        }
        if(s[2]==0) cout<<'0';
        else{
            for(int i=1;i<=s[2]-'0';i++){
                cout<<to_string(i);
            }
        }
    }
    else if(len==2){
        for(int i=0;i<s[0]-'0';i++){
            cout<<'S';
        }
        if(s[1]==0) cout<<'0';
        else{
            for(int i=1;i<=s[1]-'0';i++){
                cout<<to_string(i);
            }
        }
    }
    else if(len==1){
        if(s[0]==0) cout<<'0';
        else{
            for(int i=1;i<=s[0]-'0';i++){
                cout<<to_string(i);
            }
        }
    }
    return 0;
}
