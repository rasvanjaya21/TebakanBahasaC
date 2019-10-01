#include<iostream>
#include<string.h>
using namespace std;

int main (){

    string jawaban;

    cout<<"Kucing apa yang selalu benar ?\n"<<endl;
    getline(cin,jawaban);

    if (jawaban.compare("kucing ga wrong")==0){
        cout<<"Selamat Kamu Benar :) "<<endl;
    }
    else{
        cout<<"Coba Lagi :( "<<endl;
    }
    return 0;
}