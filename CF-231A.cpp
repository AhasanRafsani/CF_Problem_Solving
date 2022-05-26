
#include<iostream>

using namespace std;

int main(){
    int n ;
    cin>>n;
    int pSolve=0;
    while(n--){

        int solve=0;
        int p , v , t;
        cin>>p>>v>>t;

        if(p==1){
          solve++;
        }
        if(v==1){
          solve++;
        }
        if(t==1){
          solve++;
        }

        if(solve>=2){
          pSolve++;

        }

         solve=0;

    }
      cout<<pSolve;
 return 0;
}
