#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        int i,k=0;

          for( i=1 ;; i++){
                int j;
            for( j=1; j<=x; j++){
                if(i==1 && j==2) {
                    break;
                }
            }
            if(i!=1){

                j=j-1;

            }
            k=k+j;
            if(k>=n){
                break;
            }
          }
          cout<<i<<endl;


    }
   return 0;
}
