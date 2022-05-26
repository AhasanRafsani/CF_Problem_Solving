#include<iostream>
using namespace std;

int main(){

  int n,k;
   cin>>n>>k;
  int leftMinutes=k;
  int haveMinutes=240;
  int tSP=0;

   for(int i=1; i<=n; i++){
        leftMinutes=leftMinutes+(5*i);

      if(haveMinutes>=leftMinutes){
         tSP++;
      }
      else{
        break;
      }
   }

   cout<<tSP<<endl;


 return 0;
}
