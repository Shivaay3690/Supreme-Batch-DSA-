#include<iostream>
#include<vector>
using namespace std;


int Find_duplicates(vector<int>&nums){
    int slow = nums[0];
    int fast = nums[0];

    slow = nums[slow];
    fast = nums[nums[fast]];

      while(slow != fast){
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    
    slow = nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return fast;
}
int main(){
    vector<int> nums = {1,3,4,2,2};
    int ans = Find_duplicates(nums);
    cout<<ans<<endl;
}