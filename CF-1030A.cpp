#include<iostream>
using namespace std;

int main(){

 int n;
 cin>>n;
 int a[n];
 string flag="EASY";

  for(int i=0; i<n; i++){
    cin>>a[i];
  }

   for(int i=0; i<n; i++){

    if(a[i]==1){
        flag="HARD";
        break;
    }

  }

  cout<<flag;

return 0;
}
