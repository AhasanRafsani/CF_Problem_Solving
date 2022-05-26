#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

   int n,flag=0;
   cin>>n;
   int arr[n];

   for(int i=0; i<n; i++){
     cin>>arr[i];
   }
   sort(arr,arr+n);

   for(int i=0; i<n-1; i++){
        int j=i+1;
     if(abs(arr[i]-arr[j])<=1){

           continue;
     }
     else{
        flag=1;
        break;
     }
   }

     if(flag==1){
          cout<<"NO"<<endl;
     }else{
          cout<<"YES"<<endl;
     }


  }
  return 0;
}
