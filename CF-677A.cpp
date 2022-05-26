#include<iostream>
using namespace std;

int main(){

 int n,h;
 cin>>n>>h;
 int a[n];
 int minWidth=0;

 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 for(int i=0; i<n; i++){
    if(a[i]>h){
       minWidth=minWidth+2;
    }
    else{
       minWidth=minWidth+1;
    }
 }
 cout<<minWidth;

return 0;
}
