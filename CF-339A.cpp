#include<iostream>
#include<string>
using namespace std;

int main(){
 string s;
 cin>>s;
 char temp;
 for(int i=0; i<s.length(); i=i+2){
    for(int j=0; j<s.length()-1; j=j+2){
        if(s[j]>s[j+2]){
           temp=s[j];
           s[j]=s[j+2];
           s[j+2]=temp;
        }
    }

 }
cout<<s;
return 0;
}
