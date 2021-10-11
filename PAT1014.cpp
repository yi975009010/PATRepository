//
// Created by lenovo on 2021/9/9.
//
#include<bits/stdc++.h>
using namespace std;

string week[7]={"Mon","Tus","Wed","Thu","Fri","Sat","Sun"};
int main(){
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;

    //首先从前两个字符串中找出属于星期几
    int i=0,ans=0;
    int n=min(s1.size(),s2.size());
    char c[2];
    /*找出星期几*/
    while(i<n){
        if(isupper(s1[i]) && isupper(s2[i]) && s1[i]==s2[i] || ((s1[i]>='0' && s1[i]<='9') && (s2[i]>='0' && s2[i]<='9')  && s1[i]==s2[i])){
           c[ans]=s1[i];
        }
        if(strlen(c)==2) break;
        i++;
    }
    //输出星期几
    cout<<week[c[0]-'A']<<" ";
    //输出第几小时
    if(c[1]>='0' && c[1]<='9'){
        cout<<c[1]<<":";
    }else{
        cout<<(char)(c[1]-'A'+10)<<":";
    }
    int m=min(s3.size(),s4.size());
    int j=0;
    while(j<m){
        if(s3[j]==s4[j]){
            break;
        }
    }
    cout<<char(j);

    return 0;
}
