//
// Created by lenovo on 2021/10/12.
//
#include<bits/stdc++.h>
using namespace std;
#define CLK_TCK 100


//两次获得的时钟打点数之差 (C2-C1) 就是 f 运行所消耗的时钟打点数，再除以常数 CLK_TCK，就得到了以秒为单位的运行时间
int main(){
    int C1,C2;
    cin>>C1>>C2;
//    int temp= round(double((C2-C1))/CLK_TCK);
    int temp=1.0*(C2-C1)/100+0.5;
    //求出小时
    int h=temp/3600;
    int m=temp%3600/60;
    int s= temp%60;
    cout<<setw(2)<<setfill('0')<<h<<":";
    cout<<setw(2)<<setfill('0')<<m<<":";
    cout<<setw(2)<<setfill('0')<<s;

//    cout<<h<<":"<<m<<":"<<s;
    return 0;

}

