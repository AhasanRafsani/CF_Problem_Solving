#include<iostream>
using namespace std;

int main(){

   int n;
   int totalFace=0;
   cin>>n;
   string s[n];

   for(int i=0; i<n; i++){
      cin>>s[i];
   }


   for(int i=0; i<n; i++){

       if(s[i]=="Tetrahedron"){
           totalFace=totalFace+4;
       }
       else if(s[i]=="Cube"){
           totalFace=totalFace+6;
       }
       else if(s[i]=="Octahedron"){
           totalFace=totalFace+8;
       }
       else if(s[i]=="Dodecahedron"){
           totalFace=totalFace+12;
       }
       else if(s[i]=="Icosahedron"){
           totalFace=totalFace+20;
       }

   }
   cout<<totalFace<<endl;

 return 0;
}
