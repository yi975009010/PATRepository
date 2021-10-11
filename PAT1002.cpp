//
// Created by lenovo on 2021/9/7.
//
#include<bits/stdc++.h>
using namespace std;

string GetString(char str)
{
    if(str == '0')
        return "ling";
    if(str == '1')
        return "yi";
    if(str == '2')
        return "er";
    if(str == '3')
        return "san";
    if(str == '4')
        return "si";
    if(str == '5')
        return "wu";
    if(str == '6')
        return "liu";
    if(str == '7')
        return "qi";
    if(str == '8')
        return "ba";
    if(str == '9')
        return "jiu";
}

int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum+=s[i]-'0';
    }
    string c;
    c= to_string(sum);
    for(int i=0;i<c.size();i++){
        cout<<GetString(c[i])<<" ";
    }
    return 0;
}
