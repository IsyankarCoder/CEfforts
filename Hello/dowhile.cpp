#include <iostream>

using  namespace std;

int main (){
    int i ;
    char c;
    do {
        cout<<"Bir sayı giriniz ...";
        cin>>i;
        cout<<"Girilen sayının karesi  :"<<i*i<<endl<<endl;

        cout<<"Başka bir sayı daha girmek istiyormusunuz (e/h)";
        cin>>c;

       }while(c!='h');
       cout<<"endl";
       system("PAUSE");
    return 0;
}