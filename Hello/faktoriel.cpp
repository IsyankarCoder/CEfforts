#include <iostream>
#include <locale.h>

using namespace std;

int main (){
     setlocale(LC_ALL,"Turkish");
     int sayi ,sonuc=1, i;

     cout<<"Sayıyı giriniz : ";
     cin>>sayi;

     for(i = 1;i<=sayi;i++){
         sonuc*= i;
     }

     cout<<sayi<<" sayısının faktoriyeli : " << sonuc;

    return 0;
}