//
// Created by lenovo on 2021/9/7.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int flag = 0;

    while(true){
        scanf("%d%d",&a,&b);
        if(b){
            if(flag) printf(" ");
            else flag = 1;

            printf("%d %d",a*b,b-1);
        }
        if(getchar()!=' ') break;
    }
    if(flag==0) printf("0 0");
}
