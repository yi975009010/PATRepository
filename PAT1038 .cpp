//
// Created by lenovo on 2021/10/9.
//
/*
 * 统计学生的成绩
 * */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;
    scanf("%d",&n);
    vector<int> score(101,0);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        score[temp]++;
    }

    int k;
    scanf("%d",&k);
    while(k--){
        int s,ans=0;
        scanf("%d",&s);
        printf("%d",score[s]);
        if(k!=0) printf(" ");
    }
    return 0;
}