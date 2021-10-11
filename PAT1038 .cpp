//
// Created by lenovo on 2021/10/9.
//
/*
 * 统计学生的成绩
 * */

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int target,vector<int> a){
    int left=0,right=a.size()-1;
    int ans=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(a[mid]==target) ans++;
        else if(a[mid]>target) right=mid-1;
        else left=mid+1;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k,temp,ans=0;
    cin>>k;
    while(k--){
        cin>>temp;
        int ans=binarySearch(temp,a);
        cout<<ans;
        if(k) {
            cout<<" ";
        }
        ans=0;
    }
    return 0;
}