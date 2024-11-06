#include<iostream>
using namespace std;
int main(){
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    //row wise print
     cout<<"Printing row wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Printing col wise"<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }
}