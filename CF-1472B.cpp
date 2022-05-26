#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;
    int arr[n];
    int one=0;
    int two=0;

    for(int i=0; i<n; i++){
       cin>>arr[i];
       if(arr[i]==1){
          one++;

       }
       else{
          two++;

       }
    }

    if(one>0 && two==0){
        if(one%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(one==two){
        if( one%2==0 && two%2==0 ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(one==two*2){
         cout<<"YES"<<endl;
    }
    else if(one==0 && two>0){
         if(two%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
       cout<<"NO"<<endl;
    }


  }


  return 0;
}
