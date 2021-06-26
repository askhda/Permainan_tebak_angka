#include <iostream>
#include <stdio.h>    
#include <conio.h>     
#include <stdlib.h>    
#include <time.h>      


using namespace std;

int main()
{
    //Deklarasi 
    int a, b;
    
    //Ekspresi
    srand(time(NULL));
    a=1+rand()%50;
    
    // Masukkan tebakkan
    cout<<"Permainan tebak angka"<<endl<<"Tebak angka mulai dari 1 hingga 50"<<endl<<endl;
    cout<<"Masukkan nilai tebakan ";
    cin >> b ;
    cout<<endl;
    //Kondisi tebakan benar salah
    if(b == a){
        cout<<endl<<"Selamat kamu berhasil menebak angka tersebut dengan benar"<<endl;
    }
    else{
        //Memeriksa nilai tebakan lebih besar atau kecil
        if(b>a){
            cout<<"Nilai yang kamu masukkan terlalu besar"<<endl;
        }
        else if (b<a){
            cout<<"Nilai yang kamu masukkan terlalu kecil"<<endl;
        }
        //Selalu memberikan perintah tebakan ulang jika tebakan salah
        while(b != a){
            cout<<endl<<"Masukkan nilai tebakan ";
            cin >> b ;
            cout<<endl;
            //Memeriksa nilai tebakan lebih besar,kecil, atau benar
            if(b>a){
                cout<<"Nilai yang kamu masukkan terlalu besar"<<endl;
            }
            else if(b<a){
                cout<<"Nilai yang kamu masukkan terlalu kecil"<<endl;
            }
            else{
                cout<<"Tebakan benar"<<endl;
            }
        }
    }
    cout<<endl<<"Permainan ini dibuat oleh Diyastri Khotimatul Huda"<<endl;
    return 0;
}
