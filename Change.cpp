//
// Created by lenovo on 2021/10/18.
//
#include<bits/stdc++.h>
using namespace std;

string changeToTwo(int num){
    string s="";
    while(num){
        int temp=num%2;
        s+=to_string(temp);
        num/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int  changeToTen(string s){
    int res=0;
    int k=2,j=0;
    for(int i=s.size()-1;i>=0;i--){
        res+=(s[i]-'0')*pow(k,j);
        j++;
    }
    return res;
}


int main(){
    int n;
    cin>>n;
    string s= changeToTwo(n);
    cout<<"转换成2进制数为："<<changeToTwo(n)<<endl;
    int res= changeToTen(s);
    cout<<"转换成10进制数为："<<res<<endl;
    for(int i=0;i<s.size();i++){
        s[i]=((s[i]-'0')^1)+'0';
    }
    cout<<"改变后的s:"<<s<<endl;

    cout<<"改变后的s十进制:"<<changeToTen(s)<<endl;
    return 0;
}