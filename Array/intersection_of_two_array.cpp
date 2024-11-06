#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,6,8};
    vector<int>brr{3,4,10};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=0;j<arr.size();j++){
            if(element == brr[j]){
                brr[j]=INT_MIN;
                ans.push_back(element);
            }
        }
    }
    for(auto value  : ans){
        cout<<value<<" ";
    }
    cout<<endl;
}