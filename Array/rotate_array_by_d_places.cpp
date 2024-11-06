#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int size = 5;
    int k = 2;
    for(int i=0;i<size;i++){
        int temp[(i+k)%size] = arr[i];
         for(int i=0;i<size;i++){
         cout<<temp[i]<<" ";
       }    
      }
    return 0;
}
