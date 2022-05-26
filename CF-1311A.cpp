#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
     long long int a,b;
     cin>>a>>b;
     int moves=0;

     if(a != b){

       if(a>b) {
          if((a-b)%2==0){
             moves++;
          }else{
             moves=moves+2;
          }
       }else{
          if((b-a)%2==0){
              moves=moves+2;
          }else{
             moves++;
          }
       }

     }
     cout<<moves<<endl;
  }
  return 0;
}

