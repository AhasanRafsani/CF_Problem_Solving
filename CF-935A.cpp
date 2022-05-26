#include<iostream>
using namespace std;

int main(){

  int n,k;
  cin>>n;
  int cnt=0;

  for(int i=1; i<=n/2; i++){
      k=n-i;
     if(k%i==0){
        cnt++;
     }
  }
  cout<<cnt<<endl;

  return 0;
}
