//
// Created by lenovo on 2021/11/3.
//

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> score(k,0);
    vector<int> correctanswer(k,0);
    for(int i=0;i<k;i++){
        cin>>score[i];
    }
    for(int i=0;i<k;i++){
        cin>>correctanswer[i];
    }
    int answer,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>answer;
            if(answer==correctanswer[j]){
                sum+=score[j];
            }
        }
        cout<<sum;
        if(i!=n-1){
            cout<<endl;
        }
        sum=0;
    }
    return 0;
}