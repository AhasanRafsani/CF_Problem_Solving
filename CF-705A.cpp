#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;

    for(int i=1, j=1; i<=n ,j<=n;  i++,j++){

        cout<<"I"<<" ";

        if(i%2!=0 ){
            cout<<"hate"<<" ";
        }
        else{
            cout<<"love"<<" ";
        }
        if(j==n){
            cout<<"it"<<" ";
        }
        else{
            cout<<"that"<<" ";
        }

    }

return 0;
}
