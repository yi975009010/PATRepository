// Created by lenovo on 2021/9/7.
#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
bool is_prime[N];   //标记数组，判断元素n是否是质数，1位质数，0不是质数

/*埃式筛选法*/

vector<int> isPrime(int m){
    vector<int> prim;
    for(int i=1;i<=m;i++){
        is_prime[i]=1;   //初始化标记数组
    }
    is_prime[1]=0;
    for(int i=2;i<=m;i++){
        if(is_prime[i]){
            prim.push_back(i);     //当is_prime为1时代表当前数字是质数
            //若i是质数,则i的倍数一定不是质数
            for(int j=2*i;j<=m;j+=i){
                is_prime[j]=0;
            }
        }
    }
    return prim;
}

/*bool isPrime(int n){
    if(n==1) return false;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}*/



int main(){
    vector<int> pr;
    int n,m;
    cin>>n>>m;
    pr= isPrime(110000 );
    int ans=0;

    for(int i=n-1;i<m;i++){
        cout<<pr[i];
        ans++;
        if(ans<10 && i!=m-1) cout<<" ";
        else if(ans==10){
            cout<<endl;
            ans=0;
        }
    }
    cout<<endl;
    return 0;
}

