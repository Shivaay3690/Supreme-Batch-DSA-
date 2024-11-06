#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>arr{1,2,5,7,9,4,3};
    vector<int>brr{2,4,6,8};
    // vector<int>arr{1,2,3,4};
    // vector<int> brr{3,4,5,6,7};
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
      for(int j=0;j<brr.size();j++){
          if(arr[i]==brr[j])
          brr[j] = -1;
       
   }
}
    for(int i=0;i<arr.size();i++){
    //    if(arr[i] != -1){
            ans.push_back(arr[i]);
        // }
}
    for(int j=0;j<brr.size();j++){
        if(brr[j]!= -1){
            ans.push_back(brr[j]);
        }
    }
    for(auto x: ans){
        cout<<x<<" ";
    }
        return 0;
}
 
 