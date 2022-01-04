//
// Created by lenovo on 2021/10/25.
//
#include<bits/stdc++.h>
using namespace std;
int a[2005],st[2005];
vector<int>ans;
int main(void)
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        int temp=a[i];
        while(temp!=1) temp=temp&1?(temp*3+1)/2:temp/2,st[temp]++;
    }
    for(int i=0;i<t;i++) if(!st[a[i]]) ans.push_back(a[i]);
    sort(ans.begin(),ans.end());
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i];
        if(i) cout<<" ";
    }
    return 0;
}


