#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int flag;

   for(int i=65,j=97; i<=90,j<=122; i++,j++){
        flag=0;
     for(int k=0;k<n;k++){
        if(s[k]==i || s[k]==j){
           flag=1;
           break;
        }
     }
     if(flag==0){
        break;
     }
    }

   if(flag==1){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }

  return 0;
}
