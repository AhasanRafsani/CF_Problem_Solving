#include<iostream>
#include<string>

using namespace std;

int main(){

 string x,y;
  cin>>x;
  cin>>y;
  int arr[x.length()];

  for(int i=0; i<x.length(); i++){
      if(x[i]!=y[i]){
        arr[i]=1;
      }
      else{
        arr[i]=0;
      }
  }

  for(int j=0; j<x.length(); j++){
    cout<<arr[j];
  }

return 0;
}
