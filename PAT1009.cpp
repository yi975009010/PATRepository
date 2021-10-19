//
// Created by lenovo on 2021/9/7.
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    stack<string> sta;

    while(cin>>str){
        sta.push(str);
    }

    while(!sta.empty()){
        cout<<sta.top();
        sta.pop();
        if(!sta.empty()){
            cout<<" ";
        }
    }
    return 0;
}




