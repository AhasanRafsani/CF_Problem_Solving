#include<iostream>
using namespace std;

int main(){

  int n=3,temp;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  //sort array
  for(int i=0; i<n; i++){
     for(int j=0; j<n-1; j++){
        if(arr[j]<arr[j+1]){
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
        }
     }
  }

   int middle=arr[1];
   int miniDis=(arr[0]-arr[1])+(arr[1]-arr[2]);
   cout<<miniDis<<endl;


  return 0;
}
