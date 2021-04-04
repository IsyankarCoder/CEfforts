#include <iostream>
using namespace std;


inline float  ortalama(float vize, float final){
    return 0.4 *vize + 0.6 * final;
}

int main(){
    int vize, final;
    cout<<"Vize giriniz ... :";
    cin>>vize;
    cout<<"Final giriniz ... : ";
    cin>>final;

    cout<<"öğrencinin not ortalaması = "<<ortalama(vize,final)<<endl;
    
    return 0 ;
}