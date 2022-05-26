#include<iostream>
#include<string>
using namespace std;

int main(){

  int n;
  cin>>n;
  string s;
  cin>>s;

  int countA=0;
  int countD=0;

  for(int i=0;i<n;i++){
    if(s[i]=='A'){
       countA++;
    }
    else{
        countD++;
    }
  }

  if(countA > countD){
    cout<<"Anton";
  }
  else if(countA < countD){
    cout<<"Danik";
  }
  else if (countA == countD){
    cout<<"Friendship";
  }



 return 0;
}
