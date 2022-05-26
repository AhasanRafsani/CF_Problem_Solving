
#include<iostream>
#include<string>

using namespace std;

int main(){
  int i,j;
  string s;
  cin>>s;
  int cnt=0;

  for(i=0; i<s.length(); i++){

    for(j=0; j<s.length(); j++){

            if(s[i]==s[j]){
                break;
            }


    }
            if(i==j){
             cnt++;
            }
  }
  if(cnt%2==0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }

return 0;
}
