//
// Created by lenovo on 2021/10/9.
//

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e5+10;
ll a[N];
int main(){
    int n;
    ll p;
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    ll temp=p*a[1];
    int ans=1;
    for(int i=1;i<=n;i++){
        for(int j=ans+i;j<=n;j++){
            if(a[j]<=a[i]*p){
                ans=j-i+1;
            }
            else break;
        }
    }
    cout<<ans;
    return 0;
}