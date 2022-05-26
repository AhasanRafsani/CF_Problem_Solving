#include<iostream>
using namespace std;

int main(){

   int t;
   cin>>t;
   while(t--){

      int w,h,flag=0;
      long long int n;
      cin>>w>>h>>n;

     while(1){
        int i=0,j=0;

        if( n==1 ){
           flag=1;
           break;
        }
        else{
           if(w%2 != 0 && h%2 != 0){
              break;
           }
           else{
             if(w%2==0){
                 w=w/2;
                 i=i+2;
              }
              else if(h%2==0){
                 h=h/2;
                 j=h+2;
               }
            }
        }
       if(i+j>=n){
         flag=1;
         break;
       }
     }

     if(flag){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }

   }

   return 0;
}
