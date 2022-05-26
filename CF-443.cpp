#include<iostream>
#include<string>

using namespace std;

int main(){

  string s;
  getline(cin,s);
  int cnt=0;

   for(int i=1; i<s.length()-1; i=i+3){
        int j=0;

      for(j=1; j<i; j=j+3){
        if(s[i]==s[j]){
            break;
        }
      }
      if(i==j){
        cnt++;
      }
   }
   cout<<cnt;

return 0;
}
