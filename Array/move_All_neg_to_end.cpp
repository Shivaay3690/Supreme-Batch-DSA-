  #include<iostream>
 using namespace std;
 
 void moveallNegToRight(int *a,int n){
     int s = 0,e = n-1;
     while(s<e){
         if(a[s]<0 && a[e]<0){
             e--;
         }
         else if( a[s]<0 && a[e]>0 ){
              swap(a[s],a[e]);
             s++, e--;
         }
         else{
            s++;
         }
     }
 }
  int main(){
      int a[]={-1,9,-3,4,5,-7,6,-2};
      int n= sizeof(a)/sizeof(int);
      moveallNegToRight(a,n);
      for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
      cout<<endl;
      return 0;
      }