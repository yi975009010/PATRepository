//
// Created by lenovo on 2021/9/7.
//
#include<bits/stdc++.h>
using namespace std;

const int N=110;
int a[N];
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> res(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int temp=(k+i)%n;
        res[temp]=a[i];
    }

    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
