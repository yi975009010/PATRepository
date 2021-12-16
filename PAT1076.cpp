//
// Created by lenovo on 2021/12/16.
//

#include<bits/stdc++.h>
using namespace std;

int a[4]={1,2,3,4};
int main(){
    string s[4];
    int n;
    cin>>n;
    string res="";
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cin>>s[j];
        }
        for(int j=0;j<4;j++){
            char temp1=s[j][0];
            char temp2=s[j][2];
            if(temp2=='T'){
                res+= to_string(a[temp1-'A']);
            }
        }
    }
    cout<<res;
    return 0;
}