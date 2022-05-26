#include<iostream>
#include<string>
using namespace std;

int main(){

 int x=0;
 int n;
 string statement;

 cin>>n;

 while(n--){
  cin>>statement;
  if(statement[1]=='+'){
    x++;
  }
  else{
    x--;
  }

 }

  cout<<x;
  return 0;
}
