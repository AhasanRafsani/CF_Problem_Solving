
#include<iostream>
using namespace std;

int main(){
  int n;
  int p,q,flag,cnt=0;
  cin>>n;

  cin>>p;
  int arrP[p];

  for(int i=0; i<p; i++){
    cin>>arrP[i];
  }
  cin>>q;
  int arrQ[q];

  for(int i=0; i<q; i++){
    cin>>arrQ[i];
  }


  for(int i=1; i<=n; i++){
    flag=0;
    for(int j=0;j<p;j++){
        if(i==arrP[j]){
            flag=1;
            cnt++;
            break;
        }
    }
    if(flag==0){
        for(int j=0;j<q;j++){
          if(i==arrQ[j]){
            cnt++;
            break;
        }
    }
    }

  }

  if(cnt==n){
    cout<<"I become the guy.";
  }
  else{
    cout<<"Oh, my keyboard!";
  }

return 0;
}
