#include <iostream>
#include <iomanip> //setw

using namespace std;  

int main()
{
    int not1=50;
    int not2=67;
    int not3= 80;    

    cout<<setw(8)<<"Adı"<<setw(8)<<"notu"<<endl;
    cout<<setw(8)<<"---------------------------"<<endl;

    cout<<"Ayşegul"<<setw(8)<<not1<<endl;
    cout<<"Volkan"<<setw(9)<<not1<<endl;
    cout<<"Hasan"<<setw(10)<<not1<<endl;
    cout<<setw(8)<<"----------------------------"<<endl;
    return 0;
}