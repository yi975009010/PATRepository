//
// Created by lenovo on 2022/1/10.
//

#include<bits/stdc++.h>
using namespace std;

char a[6];
char b[6]={'P','A','T','e','s','t'};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='P') a[0]++,sum++;
        else if(s[i]=='A') a[1]++,sum++;
        else if(s[i]=='T') a[2]++,sum++;
        else if(s[i]=='e') a[3]++,sum++;
        else if(s[i]=='s') a[4]++,sum++;
        else if(s[i]=='t') a[5]++,sum++;
    }

    while(a[0] || a[1] || a[2] || a[3] || a[4] || a[5]){
        for(int i=0;i<6;i++){
            if(a[i]>0){
                cout<<b[i];
                a[i]--;
            }
        }
    }
    return 0;
}

