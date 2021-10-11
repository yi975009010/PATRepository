//
// Created by lenovo on 2021/10/11.
//

/**
* 考试座位号
*/

#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
struct Student{
    string id;
    int testSeat,seat;
}S[N];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>S[i].id>>S[i].testSeat>>S[i].seat;
    }
    int k,num;   //待查询准考证个数
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>num;
        for(int j=1;j<=n;j++){
            if(num==S[j].testSeat){
                cout<<S[j].id<<" "<<S[j].seat;
            }
        }
        if(i!=k-1){
            cout<<endl;
        }
    }
    return 0;
}