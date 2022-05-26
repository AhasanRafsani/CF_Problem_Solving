#include<iostream>
using namespace std;

int main(){

    int k,n,w;
    int tCost=0;
    cin>>k>>n>>w;

    for(int i=1; i<=w; i++){
       tCost = tCost + (i*k) ;
    }


     if(tCost>n){
        int brrowMoney = tCost - n;
        cout<<brrowMoney;
     }
     else{
        cout<<0;
     }
   return 0;
}
