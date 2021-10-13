//
// Created by lenovo on 2021/10/13.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int col,row;
    char c;
    cin>>col>>c;
    for(int i=0;i<col;i++){
        cout<<c;
    }
    cout<<endl;
    if(col%2==1){
        row=col/2 + 1;
    }
    else{
        row=col/2;
    }

    for(int i=0;i<row-2;i++){
        cout<<c;
        for(int j=1;j<col-1;j++){
            cout<<" ";
        }
        cout<<c;
        cout<<endl;
    }
    for(int i=0;i<col;i++){
        cout<<c;
    }

    return 0;
}

