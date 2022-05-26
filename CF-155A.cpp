#include<iostream>
using namespace std;

int main(){

    int n,cnt=0;
    cin>>n;
    int arr[n];
    int minScore,maxScore;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
        minScore=arr[0];
        maxScore=arr[0];

    for(int i=1; i<n; i++){


          if(arr[i]>maxScore){
             cnt++;
             maxScore=arr[i];
            }

          if(arr[i]<minScore){
             cnt++;
             minScore=arr[i];
            }

    }

    cout<<cnt;



 return 0;
}
