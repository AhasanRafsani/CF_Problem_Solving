#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int totalMoves=0;
    int matrix[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<5; i++){
        for(int j=0; j<5; j++){
             if(matrix[i][j]==1){
               totalMoves = abs(2-i)+abs(2-j);
               break;
             }

        }
           if(totalMoves != 0 ){
              break;
           }
    }


      cout<<totalMoves<<endl;

return 0;
}
