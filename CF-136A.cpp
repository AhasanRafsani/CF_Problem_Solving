#include<iostream>
using namespace std;

int main(){

 int n;
 cin>>n;
 int p[n];
 int o[n];

 for(int i=0; i<n; i++){
    cin>>p[i];
 }

 for(int i=1; i<=n; i++){
    for(int j=0; j<n; j++){
      if(p[j]==i){
        o[i-1]=j+1;
      }
 }
 }
 for(int i=0; i<n; i++){
    cout<<o[i]<<" ";
 }

return 0;
}
