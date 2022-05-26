#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int a,b;
    int subt;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }else{
       subt = abs(a-b);
       if(subt%10 == 0){
         cout<<subt/10<<endl;
       }
       else{
          cout<<(subt/10)+1<<endl;
       }
    }

  }

return 0;
}
