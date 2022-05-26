#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;
  int AllStu[n];
  int PG[n],Math[n],PE[n];
  int j=0,k=0,l=0;

  for(int i=0; i<n; i++){
    cin>>AllStu[i];

    if(AllStu[i]==1){
       PG[j] = i+1;
       j++;
    }
    else if(AllStu[i]==2){
       Math[k] = i+1;
       k++;
    }
    else if(AllStu[i]==3){
        PE[l] = i+1;
        l++;
    }
  }

  int compare = min(j,k);
  int team = min(compare,l);

  cout<<team<<endl;

  for(int i=0; i<team; i++){
    cout<<PG[i]<<" "<<Math[i]<<" "<<PE[i]<<endl;
  }

   return 0;
}
