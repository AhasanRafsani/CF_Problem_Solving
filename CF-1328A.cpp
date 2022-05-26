#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  int moves;
  while(t--){
    long long int a,b;
    cin>>a>>b;

    if(a%b==0){
        moves=0;
    }
    else{
        moves=b-(a%b);
    }
    cout<<moves;

  }
 return 0;
}
