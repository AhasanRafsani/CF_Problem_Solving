#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

   int n;
   cin>>n;
   int arr[n];
   int s=0 , d=0;

   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int l=0, r=n-1;
   int maxVal=0;

   for(int i=0; i<n; i++){

      if(arr[l]>arr[r]){
         maxVal=arr[l];
         //cout<<maxVal<<endl;
         l++;
      }else{
          maxVal=arr[r];
          //cout<<maxVal<<endl;
          r--;
      }
      if(i%2==0){
        s=s+maxVal;
      }else{
         d=d+maxVal;
      }
   }


  cout<<s<<" "<<d<<endl;

   return 0;
}
