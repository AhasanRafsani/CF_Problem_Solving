#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

      long long int arr[3],n;

       for(int i=0; i<3; i++){
          cin>>arr[i];
       }

       cin>>n;

       sort(arr,arr+3);

       long long int diff = arr[2]-arr[1];
        diff += arr[2]-arr[0];
       //cout<<diff<<endl;

       if(n>=diff){
          if( (n-diff)%3 == 0){
             cout<<"YES"<<endl;
          }else{
             cout<<"NO"<<endl;
          }
       }
       else{
         cout<<"NO"<<endl;
       }

  }

  return 0;
}
