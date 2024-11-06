  #include<iostream>
 using namespace std;
 
 void moveallNegToRight(int *a,int n){
      int temp[n];
        int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            temp[count] = a[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            temp[count] = a[i];
          count++;
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
    }
 
  int main(){
      int a[]={1, -1, 3, 2, -7, -5, 11, 6 };
      int n= sizeof(a)/sizeof(int);
      moveallNegToRight(a,n);
      for(int i=0;i<n;i++){
          cout<<a[i]<<" ";
      }
      cout<<endl;
      return 0;
      }