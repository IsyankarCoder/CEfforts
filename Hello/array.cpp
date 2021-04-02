#include <iostream>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL,"Turkish");

     int a[5];
     for (int i=0;i<5; i++){
         cout<<" Eleman  : "<<i+1<<endl;
         cin>>a[i];
        
     }
      return 0; 
}