//
// Created by lenovo on 2021/10/19.
//

#include<bits/stdc++.h>
using namespace std;


bool cmp(int a,int b){
    return a>b;
}
int main(){
    vector<int> a;
    int n;
    for(int i=0;i<10;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            a.push_back(i);
        }
    }

    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            swap(a[0],a[i]);
            break;
        }
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    return 0;
}
