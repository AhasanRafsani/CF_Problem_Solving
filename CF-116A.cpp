
#include<iostream>
using namespace std;

int main(){

 int n;
 cin>>n;

 int enter_P,exit_P;
 int capacity=0;
 int remain_P , inside_All_P;

 for(int i=1; i<=n; i++){

        cin>>exit_P>>enter_P;

        if(i==1){  // 1st tram stop
            inside_All_P = enter_P + 0;

        }else{    //other tram stop
           remain_P = inside_All_P - exit_P;
           inside_All_P = enter_P + remain_P;
         }

         if(capacity<inside_All_P){
               capacity= inside_All_P;
             }



      }
   cout<<capacity<<endl;
return 0;
}
