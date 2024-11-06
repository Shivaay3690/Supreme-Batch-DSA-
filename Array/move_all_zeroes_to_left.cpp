#include<iostream>
#include<vector>
using namespace std;

void MoveZeroesTOLeft(vector<int>&nums){
    int i=0,j=0;
    int n =nums.size();
    while(i < n){
        if(nums[i] == 0){
            swap(nums[j],nums[i]);
            i++;j++;
        }
        else{
            i++;
        }
    }
}
int main(){
    vector<int> nums = {1,2,0,0,1};
    MoveZeroesTOLeft(nums);
    cout<<"Array after moving zeroes to left side:"<<endl;
    for(int value:nums){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}