#include<iostream>
#include<string>
using namespace std;

int main(){

  int arr[4];
  int tCal=0;

  for(int i=0; i<4; i++){
    cin>>arr[i];
  }

  string s;
  cin>>s;

  for(int i=0; i<s.length(); i++){

    if(s[i]=='1'){
       tCal=tCal+arr[0];
    }
    else if(s[i]=='2'){
        tCal=tCal+arr[1];
    }
    else if(s[i]=='3'){
        tCal=tCal+arr[2];
    }
    else if(s[i]=='4'){
        tCal=tCal+arr[3];
    }
  }

  cout<<tCal<<endl;


  return 0;
}
