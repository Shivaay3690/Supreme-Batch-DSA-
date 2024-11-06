#include<iostream>
#include<vector>
using namespace std;

void MoveZeroesTOEnd(vector<int>& arr){
    int i = 0 , j = 0;
    int n = arr.size();
    while(i<n){
        if(arr[i] !=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else{
            i++;
    }
    }
}
int main(){
    vector<int> arr = {2,0,4,1,3,0,8};
    
    MoveZeroesTOEnd(arr);
      cout << "Array after moving zeroes to the end: ";
    for (int value : arr) {
        cout << value << " ";
    }
        cout <<endl;
    return 0;
}