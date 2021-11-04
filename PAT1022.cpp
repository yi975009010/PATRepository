//
// Created by lenovo on 2021/9/27.
//
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


string change(ll sum,int d){
    string res="";
    while(sum){
        int temp=sum%d;
        res+=to_string(temp);
        sum/=d;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    ll a,b,d,sum=0;
    cin>>a>>b>>d;
    if(a==0 && b==0){
        cout<<0;
        return 0;
    }
    sum=a+b;
    string res;
    res= change(sum,d);
    cout<<res;
    return 0;
}
