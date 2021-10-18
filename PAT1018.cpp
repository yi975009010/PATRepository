//
// Created by lenovo on 2021/9/26.
//

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
struct Node{
    char a,b;
}node[N];

char maxN(int max,int B,int J,int C){
    if(max==B) return 'B';
    else if(max==C) return 'C';
    else return 'J';
}
int main(){
    int n;
    cin>>n;
    vector<int> Jan(3,0);
    vector<int> Y(3,0);
    for(int i=1;i<=n;i++){
        cin>>node[i].a>>node[i].b;
    }
    int ansB=0,ansC=0,ansJ=0,cntB=0,cntC=0,cntJ=0;
    for(int i=1;i<=n;i++){
        if((node[i].a=='B' && node[i].b=='C') || (node[i].a=='C' && node[i].b=='J') || (node[i].a=='J' && node[i].b=='B') ){
            Jan[0]++;
            Y[2]++;
            if(node[i].a=='B'){
                ansB++;
            }else if(node[i].a=='C'){
                ansC++;
            }
            else{
                ansJ++;
            }
        }
        else if((node[i].a=='J' && node[i].b=='C')  || (node[i].a=='C' && node[i].b=='B') || (node[i].a=='B' && node[i].b=='J') ){
            Jan[2]++;
            Y[0]++;
            if(node[i].b=='B'){
                cntB++;
            }else if(node[i].b=='C'){
                cntC++;
            }
            else{
                cntJ++;
            }
        }
        else if((node[i].a=='J' && node[i].b=='J')  || (node[i].a=='C' && node[i].b=='C') || (node[i].a=='B' && node[i].b=='B')){
            Jan[1]++;
            Y[1]++;
        }
    }


    for(int i=0;i<3;i++){
        cout<<Jan[i];
        if(i!=2){
            cout<<" ";
        }
    }
    cout<<endl;

    for(int i=0;i<3;i++){
        cout<<Y[i];
        if(i!=2){
            cout<<" ";
        }
    }
    cout<<endl;
    int maxJ=max(ansJ,max(ansB,ansC));
    int maxY=max(cntJ,max(cntB,cntC));
    cout<<maxN(maxJ,ansB,ansJ,ansC)<<" "<<maxN(maxY,cntB,cntJ,cntC);

    return 0;
}