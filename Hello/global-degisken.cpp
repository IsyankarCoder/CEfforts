#include <iostream>

using namespace std;

char c='a';
void oku();
void yaz();

int main(){
    while(c!='r')
    {
         oku();
         cout<<endl<<endl<<endl<<endl;
         yaz();
         cout<<endl<<endl;
    }
    return 0 ; 
}

void oku(){
    cin>>c;
}

void yaz(){
    cout<<c;
}