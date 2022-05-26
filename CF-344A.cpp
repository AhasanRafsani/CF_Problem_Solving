#include<iostream>
using namespace std;

int main(){

 int n;
 cin>>n;
 string mag[n+1];

 int group=1;

 for(int i=0; i<n; i++){
    cin>>mag[i];
 }

   for(int i=0; i<n-1; i++){
      if(mag[i] != mag[i+1]){
        group++;

        }

   }
   cout<<group;

return 0;
}
