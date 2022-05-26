#include<iostream>
#include<string>
using namespace std;

int main(){
 string s;
 cin>>s;
 int lower=0, upper=0;

 for(int i=0; i<s.length(); i++){
    if(s[i]>=97){
       lower++;
    }
    else{
      upper++;
    }
 }

 if(  lower > upper ){
    for(int i=0; i<s.length(); i++){
       if(s[i]<97){
        s[i]=s[i]+32;
       }
    }
 }
 else if( lower < upper){
    for(int i=0; i<s.length(); i++){
       if(s[i] >= 97){
        s[i]=s[i] - 32;
       }
    }
 }
 else if( lower == upper){
     for(int i=0; i<s.length(); i++){
       if(s[i]<97){
        s[i]=s[i]+32;
       }
    }
 }

 cout<<s<<endl;
return 0;
}
