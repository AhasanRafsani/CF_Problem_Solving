#include<iostream>
using namespace std;

int main(){

   int a,b;
   cin>>a>>b;
   int maxDiffSocks=0;
   int wearSameSocks=0;

   while(1){

        if(a>=1 && b>=1){
           a=a-1;
           b=b-1;
           maxDiffSocks++;
        }
        else{
            if(a>=2 || b>=2){
                if(a>=2){
                   a=a-2;
                   wearSameSocks++;
                }
                else{
                   b=b-2;
                   wearSameSocks++;
                }

            }

        }

        if((a<=1 && b==0) || (a==0 && b<=1)){
            break;
        }

   }
   cout<<maxDiffSocks<<" "<<wearSameSocks;

  return 0;
}
