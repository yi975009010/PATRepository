//
// Created by lenovo on 2021/9/8.
//

#include<bits/stdc++.h>
using namespace std;

const int N=1010;
int a[N];
int main(){
    int n,A1=0,A2=0,A3=0,A5=-1,ans=0,cnt=0,mst=0,sum=0,sum1=0;
    char c;
    float A4;
    vector<int> b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]%5==0 &&a[i]%2==0){
            ans++;
            A1+=a[i];
        }
        if(a[i]%5==1){
            b.push_back(a[i]);
        }
        if(a[i]%5==2){
            A3++;
        }
        if(a[i]%5==3){
            cnt++;
            sum+=a[i];
        }
        if(a[i]%5==4){
            mst++;
            A5=max(A5,a[i]);
        }
    }
    for(int i=0;i<b.size();i++){
        if(i%2==0){
            A2+=b[i];
        }
        else{
            A2-=b[i];
        }
    }
    A4=sum*1.0/cnt;
    //输出A1
    if(ans==0){
        cout<<"N ";
    }else{
        cout<<A1<<" ";
    }
    //输出A2
    if(b.size()==0){
        cout<<"N ";
    }else{
        cout<<A2<<" ";
    }
    //输出A4
    if(A3==0){
        cout<<"N ";
    }
    else{
        cout<<A3<<" ";
    }
    //输出A4
    if(cnt==0){
        cout<<"N ";
    }else{
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<A4<<" ";
    }

    //输出A5
    if(mst==0){
        cout<<"N";
    }
    else{
        cout<<A5;
    }
    return 0;
}