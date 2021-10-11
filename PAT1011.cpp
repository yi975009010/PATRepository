//
// Created by lenovo on 2021/9/7.
//
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T,ans=1;
    ll a,b,c;
    cin>>T;

    while(T--){
        cin>>a>>b>>c;
        if((a+b)>c){
            cout<<"Case #"<<ans<<": true";
            if(T) cout<<endl;
        }
        else{
            cout<<"Case #"<<ans<<": false";
            if(T) cout<<endl;
        }
//        if(ans<4) cout<<endl;
        ans++;
    }
    return 0;
}