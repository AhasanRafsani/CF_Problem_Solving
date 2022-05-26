#include<iostream>

using namespace std;

int main(){

  int t;
  cin>>t;
  while(t--){

    long long int x,y,n;
    cin>>x>>y>>n;
     int div=n/x;
      if(div*x+y>n){
        cout<<(div*x+y) - x<<endl;
      }
      else{
        cout<<(div*x+y)<<endl;
      }
    }



  return 0;
}
