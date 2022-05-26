#include<iostream>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    long long int n;
    cin>>n;
    int d = n/3;
    int c1=d,c2=d;

    for(int i=0 ; ; i++){

        if(c1+(c2*2)==n){
            break;
        }
        else{
            if(n - (c1+(c2*2))>1){
                c2++;
            }else{
                c1++;
            }
        }
    }
    cout<<c1<<" "<<c2<<endl;

  }

  return 0;
}
