#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    int sum=0;
    int n,k;
    cin>>n>>k;
    int a[n],b[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());

    for(int j=0; j<k; j++){
        if(a[j]<b[j]){
            a[j]=b[j];
        }
    }

    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }

    cout<<sum<<endl;


  }


   return 0;
}

