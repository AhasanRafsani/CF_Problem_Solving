#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int k,i;
    cin>>k;


    for( i=1;;i++){

        if(i%10 == 3 || i%3 == 0){
            continue;
          }
          else{
            k--;
          }


         if(k==0){
            cout<<i<<endl;
            break;
        }


    }

  }

  return 0;
}
