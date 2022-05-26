#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int h,m;
    cin>>h>>m;
    int dayMinutes = 24*60;
    int currentMinutes = (h*60) + m;
    cout<<dayMinutes-currentMinutes<<endl;

  }

  return 0;
}
