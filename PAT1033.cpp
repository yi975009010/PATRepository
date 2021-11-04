//
// Created by lenovo on 2021/11/4.
//
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1,s2,temp="";    //s1为坏掉的键,s2为应该输入的字符
    getline(cin,s1);
    cin>>s2;

    for(int i=0;i<s2.size();i++){
        if(s1.find(toupper(s2[i])) != string::npos){
            continue;
        }
        if(isupper(s2[i]) && s1.find('+')!=string::npos){
            continue;
        }
        temp+=s2[i];
    }
    cout<<temp;
    return 0;
}
