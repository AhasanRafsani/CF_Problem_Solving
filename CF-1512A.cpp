#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    int n,index=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){

         if(i==0){
            if(arr[i] != arr[i+1] && arr[i] != arr[n-1] ){
                index=i+1;
                //cout<<arr[n-1];
                break;
            }
         }
         else if(i==n-1){
            if(arr[i] != arr[i-1] && arr[i] != arr[0] ){
                index=i+1;
                //cout<<arr[0];
                break;
            }
         }
         else{

            if( arr[i]!= arr[i-1] && arr[i]!= arr[i+1] ){
               index=i+1;
               break;
              }

        }

    }
    cout<<index<<endl;


  }

  return 0;
}
