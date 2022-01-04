#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0;      //m为最大值的学校代号
    int a[100001]={0};
    cin>>n;
    while(n--){
        int i,s;
        cin>>i>>s;
        a[i]+=s;
        if(a[i]>=a[m]){	//在加分同时判断最值，记录学校代号
            m=i;
        }
    }
    cout<<m<<" "<<a[m];
    return 0;
}
