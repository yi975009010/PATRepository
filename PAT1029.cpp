//
// Created by lenovo on 2021/10/15.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    string res="";
    for(int i=0;i<s1.size();i++){
        if(s2.find(s1[i]) == string::npos  && res.find(toupper(s1[i]))==string::npos){
            res+= toupper(s1[i]);
        }
    }
    cout<<res<<endl;
    return 0;

}