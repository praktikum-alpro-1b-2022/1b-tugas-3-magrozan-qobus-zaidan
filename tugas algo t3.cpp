#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

double A,B;


void input(){

    cout<<"Masukan Panjang Sisi A : ";cin>>A;
    cout<<"Masukan Panjang Sisi B : ";cin>>B;
    cout<<"---------------------------------------------\n";
}


double SisiMiring(double SisiA, double SisiB){
    double sisi_miring;
    sisi_miring=sqrt((SisiA*SisiA)+(SisiB*SisiB));
    return sisi_miring;
    }

main(){

    cout<<"=============================================\n";
    cout<<"||         MENGHITUNG SISI MIRING          ||\n";
    cout<<"||           SEGITIGA SIKU-SIKU            ||\n";
    cout<<"=============================================\n";

    input();

    cout<<"Jadi sisi miring (C) : "<<SisiMiring(A,B)<<endl;
    cout<<"---------------------------------------------\n";

    //program menghitung nilai akhir mahasiswa

    float tgs,uas,uts;
    cout<<"Program Untuk Menghitung Nilai Akhir Mahasiswa"<<endl;
    cout<<"Masukkan Nilai Tugas \t\t\t: ";cin>>tgs;
    cout<<"Masukkan Nilai UTS \t\t\t: ";cin>>uts;
    cout<<"Masukkan Nilai UAS \t\t\t: ";cin>>uas;

    float na;

    na=((tgs*20/100)+(uts*30/100)+(uas*50/100));

    cout<<"==============================================="<<endl;
    cout<<"Nilai Akhir  = "<<na;



}
