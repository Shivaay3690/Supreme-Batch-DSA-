#include<iostream>
using namespace std;
void printcolwisesum(int a[][3],int rows,int cols){
    cout<<"Printing col wise sum"<<endl;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
         sum = sum + a[j][i];
        }
        cout<<sum<<endl;
    }
}
int main(){
    int a[3][3];
    int rows = 3;
    int cols = 3;
    for(int i = 0 ;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Printing row wise"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    printcolwisesum(a,rows,cols);
    return 0;
}