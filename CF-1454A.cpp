#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    int arr[n];
    int j=0;
    for(int i=1; i<=n; i++){
        if(i==n){
            arr[j]=1;
            j++;
        }
        else{
            arr[j]=i+1;
            j++;
        }
    }
     for(int i=0; i<j; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

  return 0;
}
