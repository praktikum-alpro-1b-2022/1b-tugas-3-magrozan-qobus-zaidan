#include <iostream>

using namespace std;

int main(){
    float v,r;
    cout<<"==============================================="<<endl;
    cout<<"==============================================="<<endl;

    cout<<"  \t\t    Menghitung arus (I)"<<endl;
    cout<<"Masukkan nilai v  : ";
    cin>>v;
    cout<<"Masukkan nilai r  : ";
    cin>>r;
    cout<<"Nilai arus (I) adalah :"<<v/r<<endl;
    cout<<"==============================================="<<endl;

    float a,b;
    cout<<"==============================================="<<endl;

    cout<<"    \t\t   Menghitung arus (V)"<<endl;
    cout<<"Masukkan nilai I  : ";
    cin>>a;
    cout<<"Masukkan nilai R  : ";
    cin>>b;
    cout<<"Nilai tegangan (V) adalah :"<<a*b<<endl;
    cout<<"==============================================="<<endl;
    cout<<"==============================================="<<endl;

    float x,y;

    cout<<"      \t\t   Menghitung arus (R)"<<endl;
    cout<<"Masukkan nilai V  : ";
    cin>>x;
    cout<<"Masukkan nilai I  : ";
    cin>>y;
    cout<<"Nilai tegangan (R) adalah : "<<x/y<<endl;


    float p,q,o;



    cout<<"\n Di ketahui Y = bx2 + 0,5x ~ c dimana b = 25 dan x = 15 dan c = 2: \n";
    cout<<"Masukkan nilai b  : ";
    cin>>p;
    cout<<"Masukkan nilai x  : ";
    cin>>q;
    cout<<"Masukkan nilai c  : ";
    cin>>o;

    float hasil=(p*(q*q)+(0,5*q)-o);

    cout<< "Jawab :\n  Y = bx2 + 0,5 x ~ c = "<<hasil<<endl;



}
