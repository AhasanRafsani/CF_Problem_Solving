#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;
    int a[n],b[n];
    long long int minNumA=1000000000;
    long long int minNumB=1000000000;
    long long int moves=0;

    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<minNumA){
           minNumA = a[i];
        }
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
         if(b[i]<minNumB){
           minNumB = b[i];
        }
    }


    for(int i=0; i<n; i++){

       if( a[i]-minNumA > b[i]- minNumB){
            moves=moves + a[i]- minNumA ;
       } else{
            moves=moves + b[i]- minNumB ;
       }
    }

     cout<<moves<<endl;


  }

  return 0;
}
