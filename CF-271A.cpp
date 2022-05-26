#include<iostream>
using namespace std;

int main(){

 int year;
 cin>>year;



while(1){

  year++;
  int y = year;
  int a,b,c,d;

        a=y%10;
        y=y/10;


        b=y%10;
        y=y/10;


        c=y%10;
        y=y/10;


        d=y%10;


       if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
          break;
       }


}
  cout<<year;
return 0;
}
