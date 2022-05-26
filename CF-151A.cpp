#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;

  int needDrink = (k*l)/nl;

  int totalLimeSclice = c*d;

  int needSolt= p/np;


  int cmpMin =  min(needDrink,totalLimeSclice);
  int finalMin= min(cmpMin,needSolt);
  cout<<finalMin/n<<endl;

  return 0;
}
