#include<iostream>
#include<string>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    string b;
    cin>>b;
    if(b.length()==2){
        cout<<b<<endl;
    }
    else{
       for(int i=0; i<=b.length(); i=i+2){
           if(i != b.length()){
              cout<<b[i];
           }
           else{
             cout<<b[b.length()-1];
           }
       }
       cout<<endl;
    }
  }


  return 0;
}
