#include<iostream>
using namespace std;

int main(){

  int n;
  cin>>n;
  int sum=0;
  int flag=0;

  for(int i=0; i<n; i++){
        int j;
    for( j=1; j<=i; j++){
            sum=sum+j;
            cout<<j<<" ";
           if(sum>=n){
             flag=1;
             break;
           }
    }
    cout<<endl;
    if(flag==1){
        if(j==i){
          cout<<i<<endl;
          break;
        }
        else{
         cout<<i-1<<endl;
          break;
        }

    }
  }


  return 0;

}
