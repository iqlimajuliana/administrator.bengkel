#include <iosstream>
using namespace std;

#include <iostream>
using namespace std;


int harga(int bulan) {
    if(bulan < 2) {
       retur  200000;
    }
    else if (bulan <= 4) {
         return 400000;
    }
    else {
         return 600000;
    }
}
void ask(int bulan) {
     string jawab;
     int price = harga(bulan);
     cout << "Apakah ada kerusakan di kendaraan anda? (ada / tidak) : ";
     cin>>jawab;




    if (jawab == "ada"){
       cout<< "Service yang disarankan : Service berat" << endl;
       cout<< "Total Biaya: 600.000" << endl;
} 
    else if (jawab == "tidak") {
        cout << "Service yang disarankan: ";
        if (bulan < 2) {
            cout << "Service ringan" << endl;
            price = 200000;
        }
        else if (bulan <= 4) {
            cout << "Service berkala" << endl;
            price = 400000;
        }
        else {
            cout << "Service berat" << endl;
            price = 600000;
        }
        cout << "Harga: Rp." << price << endl;
        cout << "Total Biaya: Rp." << price << endl;
    }
    else {
        cout << "Input yang dimasukan tidak valid. Tolong masukkan 'ada' atau 'tidak'." << endl;
    }

    cout << "=============================" << endl;
}