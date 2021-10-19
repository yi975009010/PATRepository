//
// Created by lenovo on 2021/9/9.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
struct Student{
    int id;
    int lscore,hscore;    //lsocre为德分,hsocre为才分
    Student(int id,int lscore,int hsocre){
        this->id = id;
        this->lscore=lscore;
        this->hscore=hsocre;
    }
};

int n,L,H;
bool cmp(Student a,Student b){
    if(a.hscore+a.lscore == b.lscore+b.hscore){
        if(a.lscore == b.lscore){
            return a.id<b.id;
        }
        return a.lscore>b.lscore;
    }
    return a.hscore+a.lscore > b.lscore+b.hscore;
}


int main(){
    cin>>n>>L>>H;
    vector<Student> stu1;
    vector<Student> stu2;
    vector<Student> stu3;
    vector<Student> stu4;
    int id,lsocre,hsocre;
    for(int i=0;i<n;i++){
        cin>>id>>lsocre>>hsocre;
        //才德全尽
        if(lsocre>=H && hsocre>=H){
            stu1.push_back(Student(id,lsocre,hsocre));
        }
        //德胜才
        else if(lsocre>=H && (hsocre>=L && hsocre<H)){
            stu2.push_back(Student(id,lsocre,hsocre));
        }
        //才德兼亡,德胜才
        else if((lsocre>=L && lsocre<H) && (hsocre>=L && hsocre<H) && lsocre>=hsocre){
            stu3.push_back(Student(id,lsocre,hsocre));
        }
        else if(lsocre>=L && hsocre>=L){
            stu4.push_back(Student(id,lsocre,hsocre));
        }
    }

    sort(stu1.begin(),stu1.end(),cmp);
    sort(stu2.begin(),stu2.end(),cmp);
    sort(stu3.begin(),stu3.end(),cmp);
    sort(stu4.begin(),stu4.end(),cmp);

    int sum=stu1.size()+stu2.size()+stu3.size()+stu4.size();
    cout<<sum<<endl;
    for(int i=0;i<stu1.size();i++){
        cout<<stu1[i].id<<" "<<stu1[i].lscore<<" "<<stu1[i].hscore<<endl;
    }

    for(int i=0;i<stu2.size();i++){
        cout<<stu2[i].id<<" "<<stu2[i].lscore<<" "<<stu2[i].hscore<<endl;
    }

    for(int i=0;i<stu3.size();i++){
        cout<<stu3[i].id<<" "<<stu3[i].lscore<<" "<<stu3[i].hscore<<endl;
    }

    for(int i=0;i<stu4.size();i++){
        cout<<stu4[i].id<<" "<<stu4[i].lscore<<" "<<stu4[i].hscore;
        if(i<stu4.size()-1){
            cout<<endl;
        }
    }



    return 0;
}
