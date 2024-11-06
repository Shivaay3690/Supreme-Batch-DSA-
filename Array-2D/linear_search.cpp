#include<iostream>
using namespace std;

bool findkey(int arr[][3],int rows,int cols,int key){
     
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
         if(arr[i][j]==key){
            return true;
            break;
         }
        }
    }
        return false;
}
int main(){
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    for(int i = 0 ;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int key ;
    cout<<"Enter the key element to search:-";
    cin>>key;
    if(findkey(arr,rows,cols,key)){
        cout<<"Found it";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}