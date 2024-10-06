#include <iosstream>
using namespace std;

void Menu() {
    cout << "=============================" << endl;
    cout << "      MENU LAYANAN KENDARAAN      " << endl;
    cout << "=============================" << endl;
    cout << "1. Service ringan (Harga: Rp.200.000)" << endl;
    cout << "2. Service berkala (Harga: Rp.400.000)" << endl;
    cout << "3. Service berat (Harga: Rp.600.000)" << endl;
    cout << "=============================" << endl;
}

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

int main() {
    int n;
    Menu();
    cout << "Sudah berapa bulan kendaraan belum di service? ":
    cin >> n;
    ask(n);
    cout << "Terima kasih telah melakukan service di bengkel bubub <3 " << endl
    return 0;
}