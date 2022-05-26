#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;
  int s[4];

  while(t--){

    for(int i=0; i<4; i++){
        cin>>s[i];
    }

    int team1,team2;

    if(s[0]>s[1]){
        team1=s[0];
    }
    else{
        team1=s[1];
    }

    if(s[2]>s[3]){
        team2=s[2];
    }
    else{
        team2=s[3];
    }

    sort(s,s+4);

    if( (s[3]==team1 || s[3]==team2) && ( s[2]==team1 || s[2]==team2) ){
        cout<<"YES"<<endl;
    }else{
        cout<<"No"<<endl;
    }

  }

  return 0;
}
