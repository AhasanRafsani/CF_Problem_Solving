
#include<iostream>
using namespace std;

int main(){

  int n;
  float sum=0.0;
  cin>>n;
  int p[n];

  for(int i=0;i<n;i++){
    cin>>p[i];
  }

  for(int i=0;i<n;i++){
    sum=sum+p[i];
  }

  double ans=sum/n;
  cout<<ans<<endl;

return 0;
}



