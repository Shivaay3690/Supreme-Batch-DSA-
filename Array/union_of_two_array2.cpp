#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
int arr[]={1,2,4,6,8,10};
int sizea = 6;
int brr[] = {3,4,5,6};
int sizeb = 4;
vector<int> ans;
for(int i=0;i<sizea;i++){
    int element = arr[i];
//   ans.push_back(arr[i]);

for(int j=0;j<sizeb;j++){
  //  int element=brr[j]; 
    if(element == brr[j])
    brr[j] = -1;
  
 ans.push_back(element);
}
}
 
 for(int value : ans){
  
     cout<<value<<" ";
 }

return 0;

}
