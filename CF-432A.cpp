
#include<iostream>
using namespace std;

int main(){

  int n,k;
  cin>>n>>k;
  int arr[n];
  int cnt=0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  for(int i=0; i<n; i++){
    if(5-arr[i]>=k){
        cnt++;
    }
  }

  cout<<cnt/3<<endl;


  return 0;
}
