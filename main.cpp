#include <bits/stdc++.h>
using namespace std;

int n;
int main(){
    scanf("%d",&n);
    double sum=0.0,res=0.0;
    for(int i=1;i<=n;i++){
        double temp;
        scanf("%lf",&temp);
        sum+=temp*i*(n+1-i);
    }
    printf("%.2lf",sum);
    return 0;
}
