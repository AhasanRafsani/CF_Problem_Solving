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
    int a=0;
    int b=0;

    for(int i=0; i<n; i++){
       arr[i]=pow(2,i+1);

       if(i<(n/2-1) || i==n-1){
         a=a+arr[i];
       }
       else{
         b=b+arr[i];
       }
    }
    cout<<a-b<<endl;


  }

  return 0;
}
