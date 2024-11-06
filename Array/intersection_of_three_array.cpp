#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int>brr{3,4,10};
    vector<int>crr{12,45,3,2,4,6,7};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element1 = arr[i];
        for(int j=0;i<brr.size();j++){
            int element2 = brr[j];
      
        for(int k=0;k<crr.size();k++){
            if(element1 == brr[j] && element2==crr[k]){
                brr[k]=INT_MIN;
                ans.push_back(element1);
                ans.push_back(element2);

            }
        }
    }
      }
    for(auto value  : ans){
        cout<<value<<" ";
    }
    cout<<endl;
}