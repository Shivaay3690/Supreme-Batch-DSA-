#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
       if(arr[i]==key)
        return true;
    }
       return false;
}

int main(){
    int arr[5]={12,34,32,11,56};
    int key = 4,size = 5;
    if(find(arr,size,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
// int main(){
//     int arr[5]={12,34,10,7,15};
//     int size=5,key=10;
//     bool flag = 0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             flag = 1;
//         }
//     }
//     if(flag){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not found"<<endl;
//     }
// }