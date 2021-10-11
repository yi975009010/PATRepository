//
// Created by lenovo on 2021/9/16.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int step=0;{
        while(n!=1){
            if(n%2==0){
                n/=2;
            }
            else if(n%2==1){
                n=(3*n+1)/2;
            }
            step++;
        }
        cout<<step;
    }
    return 0;
}