#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mini=1000;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
             int subt = abs(arr[i]-arr[j]);
            if(subt<mini){
                mini=subt;
            }
        }
    }
    cout<<mini<<endl;

  }

   return 0;
}
