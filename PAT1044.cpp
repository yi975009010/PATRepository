//
// Created by lenovo on 2021/10/13.
//
#include<bits/stdc++.h>
using namespace std;

string earth[13]={"0","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string mark[13]={"tret","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int a[13] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
int main(){


    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        getline(cin,s);
        string res="";
        if(s[0]>='0'  && s[0]<='9'){   //是数字的情况
            int temp= atoi(s.c_str());
            int a=temp/13;
            int b=temp%13;
            cout<<mark[a]<<" "<<earth[b];
        }
        else{
            string temp="";
            for(int j=0;j<s.size();j++){
                temp+=s[i];
                if(s[i]== '){

                }
            }
        }

    }
}

