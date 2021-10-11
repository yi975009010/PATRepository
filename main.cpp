#include <bits/stdc++.h>
using namespace std;

/*输出a图形*/
int main() {
//    std::cout << "Hello, World!" << std::endl;

    int row,col;   //行，列;
    char c;    //输出图形的字符
    cin>>col>>c;   //输入行数和列数
    if(col%2==0)  row=col/2;
    else row=col/2+1;

    //输出第一行
    for(int i=0;i<col;i++){
        cout<<c;
    }
    cout<<endl;

    //输出第2-n-1行
    for(int i=2;i<row;i++){
        cout<<c;
        for(int j=0;j<col-2;j++){
            cout<<' ';
        }
        cout<<c<<endl;
    }

    //输出最后一行
    for(int i=0;i<col;i++){
        cout<<c;
    }
    cout<<endl;
    return 0;
}
