#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
     int n;
     cin>>n;
     int arr[n];
     long long int maxval=0;
     long long int minval=1000000000;

     for(int i=0; i<n; i++){
        cin>>arr[i];
     }

       for(int i=0; i<n; i++){
          if(arr[i]>maxval){
             maxval = arr[i];
           }
       }

       for(int i=0; i<n; i++){
          if(arr[i]<minval){
             minval = arr[i];
           }
       }

       cout<<maxval-minval<<endl;
       //cout<<minval<<endl;
  }

  return 0;
}
