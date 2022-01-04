//
// Created by lenovo on 2021/11/5.
//
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,flag1=1;
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        int flag2=1,sum=0,z;
        for(int j=0;j<s.size()-1;j++){
            if(s[j]<'0' || s[j]>'9'){
                flag2=0;
                break;
            }
            sum+=(s[j]-'0')*weight[j];
        }
        z=sum%11;
        if(flag2==0 || M[z]!=s[17]){
            cout<<s;
            flag1=0;
            if(i!=n-1) cout<<endl;
        }

    }
    if(flag1==1){
        cout<<"All passed";
    }
    return 0;
}
