//
// Created by lenovo on 2021/9/7.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
bool is_prime[N];
/*埃式筛选法*/
vector<int> isPrime(int n){
    vector<int> prim;
    for(int i=1;i<=n;i++){
        is_prime[i]=1;   //初始化标记数组
    }
    is_prime[1]=0;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prim.push_back(i);     //当is_prime为1时代表当前数字是质数
            //若i是质数,则i的倍数一定不是质数
            for(int j=2*i;j<=n;j+=i){
                is_prime[j]=0;
            }
        }
    }
    return prim;
}

int main(){
    int n,ans=0;
    cin>>n;
    vector<int> pr;
    pr= isPrime(n);
    for(int i=0;i<pr.size();i++){
        if(pr[i+1]-pr[i]==2) ans++;
    }
    cout<<ans;
    return 0;
}
