#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    int a,b;
    cin>>a>>b;
    int minval=min(a,b);
    int maxval=max(a,b);

    if(maxval<(minval+minval)){
        cout<<(minval+minval)*(minval+minval)<<endl;
    }
    else{
        cout<<maxval*maxval<<endl;
    }
  }


   return 0;
}
