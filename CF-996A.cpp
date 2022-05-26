#include<iostream>
using namespace std;

int main(){

 long long int n;
 cin>>n;
 int miniBill=0;

   while(n!=0){

     if(n>=100){
        n=n-100;
        miniBill++;
     }
     else if(n>=20){
        n=n-20;
        miniBill++;
     }
     else if(n>=10){
        n=n-10;
        miniBill++;
     }
     else if(n>=5){
        n=n-5;
        miniBill++;
     }
     else if(n>=1){
        n=n-1;
        miniBill++;
     }

   }

   cout<<miniBill<<endl;

 return 0;
}
