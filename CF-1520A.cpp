#include<iostream>
using namespace std;

int main(){

   int t;
   cin>>t;
   while(t--){

    int n;
    cin>>n;
    char arr[n];
    char check[n];
    int i,j=0;
    int flag;

    for(int i=0; i<n; i++){
       cin>>arr[i];
    }

    for( i=0; i<n; i++){
       if(i==0){
         check[j]=arr[i];
         j++;
       }
       else if(arr[i-1] != arr[i]){

            flag=0;

            for(int k=0; k<=j; k++){
               cout<<j<<endl;
               if(check[k]==arr[i]){
                    flag=1;
                    cout<<"No"<<endl;
                    break;
               }
            }
          if(flag=0){
             check[j]=arr[i];
             j++;
           }else{
               break;

           }

        }


         }
         if(i==n){
            cout<<"Yes"<<endl;
         }else{
            //cout<<"NO"<<endl;
         }

   }




   return 0;
}
