//
// Created by lenovo on 2021/9/26.
//

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> num(10,0);
    int ans=0;
    for(int i=0;i<s.size();i++){
        num[(s[i]-'0')%10]++;
    }

    for(int i=0;i<num.size();i++){
        if(num[i]!=0){
            cout<<i<<":"<<num[i]<<endl;
        }
    }
    return 0;
}