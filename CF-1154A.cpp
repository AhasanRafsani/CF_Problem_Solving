#include<iostream>
using namespace std;

int main(){
   int n=4;
   long long int x[n];

   for(int i=0;i<n;i++){
     cin>>x[i];
   }
   long long int abc=0;

   for(int i=0;i<n;i++){
     if(x[i]>abc){
        abc=x[i];
     }
   }

   for(int i=0;i<n;i++){
     if(x[i] != abc){
        cout<<abc-x[i]<<" ";
     }
   }



  return 0;
}
