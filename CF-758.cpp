
#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  int arr[n];
  int maxNum=0;
  int mNOB=0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]>maxNum){
        maxNum=arr[i];
    }
  }

  for(int i=0; i<n; i++){
     if(arr[i] != maxNum){
        mNOB=mNOB+(maxNum-arr[i]);
     }
  }

  cout<<mNOB<<endl;

  return 0;
}
