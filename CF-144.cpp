#include<iostream>
#include<string>
using namespace std;

int main(){

  int n;
  cin>>n;
  int solder[n];
  int maxi=2;
  int maxPos=0;
  int mini=100;
  int miniPos=0;

  for(int i=0; i<n; i++){
      cin>>solder[i];
    if(solder[i]>maxi){
         maxi=solder[i];
         maxPos=i;
    }
     if(solder[i]<mini){
         mini=solder[i];
         miniPos=i;
    }

  }
  cout<<maxPos<<endl;
  cout<<miniPos<<endl;

  int tolalSec=(maxPos-1)+(n-miniPos);

  if(miniPos>maxPos){
    cout<<tolalSec<<endl;
   }
   else{
    cout<<tolalSec-1<<endl;
   }


  return 0;
}
