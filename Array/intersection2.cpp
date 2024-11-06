 #include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int>brr{3,4,10};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        // ans.push_back(arr[i]);
       int element=arr[i];
    for(int j=0;j<brr.size();j++){
        if(element==brr[j]){
            brr[i]=-1;
        ans.push_back(element);
       // ans.push_back(brr[j]);
    }
    }
    }
    for(int i=0;i<ans.size();i++){
     // if(ans[i]!= -1){
        cout<<ans[i]<<" ";
     // }
    }
    // for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    //     ans.push_back(arr[i]);
    
    //     for(int j=0;j<arr.size();j++){
    //         if(element == brr[j]){
    //             brr[j]=INT_MIN;
    //             ans.push_back(brr[j]);
    //         }
    //     }
    // }
    // for(int i=0;i<ans.size();i++){
    //    if(ans[i]!=INT_MIN){
    //     cout<<ans[i]<<" ";     
    //       }
    // }  
    
    // cout<<endl;
}