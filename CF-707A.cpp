#include<iostream>
using namespace std;

int main(){

  int n,m,flag=0;
  cin>>n>>m;
  char arr[n][m];

   for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
         cin>>arr[i][j];
     }
   }

   for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
       if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y'){
           flag=1;
           break;
       }
     }
   }

   if(flag){
     cout<<"#Color"<<endl;
   }else{
      cout<<"#Black&White"<<endl;
   }

  return 0;
}
