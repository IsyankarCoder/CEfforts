#include <iostream>
#include <iomanip>

using namespace std;

int main(){
        
        int ogrNot[4][2] = {{10,20},{30,15}};
        for (int i = 0; i<4;i++){
            float ort = ogrNot[i][0] *0.4 + ogrNot[i][1]* 0.6;
            cout<<i+1<<".ogrencinin ortalaması : "<<ort<<endl;
        }

    return 0 ; 

}