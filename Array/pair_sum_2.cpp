 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
   vector<int>arr{1,3,5,7};
   vector<int>brr{2,4,6,8};
   int sum = 9;
   for(int i=0;i<arr.size();i++){
       for(int j=0;j<brr.size();j++){
           if(arr[i]+brr[j]==sum){
             cout<<arr[i]<<","<<brr[j]<<endl;
           }
       }
   }
 return 0;
 }