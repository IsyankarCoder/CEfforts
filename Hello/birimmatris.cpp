#include <iostream>
using namespace  std;

int main (){
      int dizi[3][3],i,j;
      for (i=0;i<3;i++){
          for (j = 0; j < 3; j++)
            if(i==j){
                dizi[i][j]=1;
                cout<<"  "<<dizi[i][j];
            }
            else{
                dizi[i][j]=0;
                cout<<"  "<<dizi[i][j];
            }
         cout<<endl;
      }
    
    return 0;

}