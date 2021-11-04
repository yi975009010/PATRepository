//
// Created by lenovo on 2021/9/9.
//
#include<bits/stdc++.h>
using namespace std;

string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int i;
    //首先从前两个字符串中找出属于星期几
    int n=min(s1.size(),s2.size());
    int m=min(s3.size(),s4.size());
    /*找出星期几*/
    for(i=0;i<n;i++){
        if((isupper(s1[i]) && isupper(s2[i])  && s1[i] == s2[i]) ){
            if(s1[i]>='A' && s1[i]<='G'){
                cout<<week[s1[i]-'A']<<" ";
                break;
            }
        }
    }
    /*找出小时*/
    for(int temp=i+1;temp<n;temp++){
        if(s1[temp]==s2[temp]){
            if(isdigit(s1[temp])){
                cout<<0<<s1[temp]-'0'<<":";
                break;
            }
            else if(s1[temp]>='A'  && s1[temp]<='N'){
                cout<<s1[temp]-'A'+10<<":";
                break;
            }
        }
    }

    //输出第几分钟
    for(int i=0;i<m;i++){
        if(s3[i] == s4[i]){
            if(s3[i]>='A' && s3[i]<='Z'  ||  s3[i]>='a' && s3[i]<='z'){
                if(i<10){
                    cout<<0<<i;
                    break;
                }
                cout<<i;
                break;
            }
        }
    }
    return 0;
}


