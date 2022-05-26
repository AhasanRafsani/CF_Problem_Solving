#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  int arr[n];
  int existP=0;
  int cUntreated=0;

   for(int i=0; i<n; i++){
      cin>>arr[i];
   }

     for(int i=0; i<n; i++){
       if(arr[i]<0){
          if(existP==0){
             cUntreated++;
          }
          else{
            existP=existP-1;
          }
       }
       else{
          existP=existP+arr[i];
       }

    }

    cout<<cUntreated<<endl;


  return 0;
}
