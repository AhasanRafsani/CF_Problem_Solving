#include<iostream>


using namespace std;

int main(){
  int n ,cnt=0;
  cin>>n;
  char arr[n+1];


  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

   for(int i=0; i<n; i++){
      if(arr[i] == arr[i+1]){
        cnt++;
      }
    }
    cout<<cnt;
return 0;
}
