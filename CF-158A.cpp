#include<iostream>

using namespace std;

int main(){

int n,k , next=0;
cin>>n>>k;
int arr[50];

for(int i=0;i<n;i++){
  cin>>arr[i];
}


for(int i=0;i<n;i++){
    if( arr[i] >= arr[k-1] && arr[i]>0  ){
        next++;

    }
}
cout<<next;
return 0;
}
