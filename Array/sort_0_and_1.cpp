#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,1,0,1,1,0,1,0,1,1};
    int size = 10;
    int s = 0;
    int i = 0;
    int e = size-1;
    while(s <= e){
        if(arr[i] == 0){
           i++; s++;
        }
        else if(arr[i] == 1){
            swap(arr[s],arr[e]);
            e--;
        }
    }
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}