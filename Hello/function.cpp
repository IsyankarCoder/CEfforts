#include <iostream>
using namespace std;

float cevre (float a);


int main (){

     float kenar,cevred;

     cout<<"Kenar Giriniz : ";
     cin>>kenar;

     cevred = cevre(kenar);

     cout<<endl<<"karenin cevresi = "<<cevred<<endl;


    return 0;
}


float cevre(float a ){
    float sonuc = 4*a;
    return sonuc;

}