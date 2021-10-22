//
// Created by lenovo on 2021/10/22.
//

#include<bits/stdc++.h>
using namespace std;

int a[26];
int main(){
    string s,res;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        s[i]= tolower(s[i]);
    }
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'  &&  s[i]<='z'){
            a[s[i]-'a']++;
        }
        else{
            continue;
        }
    }
    int max=0,temp=0;
    for(int i=0;i<26;i++){
        if(a[i]>max){
            max=a[i];
            temp=i;
        }
    }
    cout<<char(97+temp)<<" "<<max;

}