#include <iostream>
using namespace std;
int main(){
 int arr[]={10,20,30,40,50,60,70};
 int size =7,start = 0,end = size - 1;
 while(start<=end){
     int temp = arr[start];
     arr[start]=arr[end];
     arr[end]=temp;
     start++;
     end--;
 }
 for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
 }
    
    return 0;
}
