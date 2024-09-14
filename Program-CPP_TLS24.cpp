

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int HARGA_BURGER = 15000;
    const int HARGA_NASI_GORENG = 16000;
    const int HARGA_HOTDOG = 13000;
    const int HARGA_AYAM_GORENG = 15000;
    const int HARGA_SOTO = 15000;

    const int HARGA_TEH = 4000;
    const int HARGA_KOPI = 5000;
    const int HARGA_JERUK_BESAR = 7500;
    const int HARGA_SUSU_MILO = 6500;
    const int HARGA_JERUK_KECIL = 6000;

    int pilihan_makanan, pilihan_minuman, pilihan_suhu;
    char konfirmasi;
    int total_harga = 0;

    do {
        cout << "Selamat datang di warung makan!" << endl;
        cout << "[==========================================]"<< endl;
        cout << "Menu Makanan:" << endl;
        cout << " "<< endl;
        cout << "1. Burger (Rp15.000)" << endl;
        cout << "2. Nasi Goreng (Rp16.000)" << endl;
        cout << "3. Hotdog (Rp13.000)" << endl;
        cout << "4. Ayam Goreng (Rp15.000)" << endl;
        cout << "5. Soto (Rp15.000)" << endl;
        cout << "0. Tidak Memesan Makanan" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan_makanan;

        if (pilihan_makanan != 0) {
            switch (pilihan_makanan) {
                case 1: total_harga += HARGA_BURGER; break;
                case 2: total_harga += HARGA_NASI_GORENG; break;
                case 3: total_harga += HARGA_HOTDOG; break;
                case 4: total_harga += HARGA_AYAM_GORENG; break;
                case 5: total_harga += HARGA_SOTO; break;
             }
            
cout << "  " << endl;
            cout << "Menu Minuman:" << endl;
            cout << "+++++++++++++++++++++++++++++" << endl;
            cout << "1. Teh (Rp4.000)" << endl;
            cout << "2. Kopi (Rp5.000)" << endl;
            cout << "3. Jeruk Besar (Rp7.500)" << endl;
            cout << "4. Susu Milo (Rp6.500)" << endl;
            cout << "5. Jeruk Kecil (Rp6.000)" << endl;
            cout << "0. Tidak Memesan Minuman" << endl;
            cout << "Masukkan pilihan Anda: ";
            cin >> pilihan_minuman;

            if (pilihan_minuman != 0) {
                switch (pilihan_minuman) {
                    case 1: total_harga += HARGA_TEH; break;
                    case 2: total_harga += HARGA_KOPI; break;
                    case 3: total_harga += HARGA_JERUK_BESAR; break;
                    case 4: total_harga += HARGA_SUSU_MILO; break;
                    case 5: total_harga += HARGA_JERUK_KECIL; break;
                }

                cout << "Pilihan suhu (1. Dingin, 2. Panas): ";
                cin >> pilihan_suhu;
            }
        }

        cout << "Apakah Anda ingin memesan lagi? (y/n): ";
        cin >> konfirmasi;
    } while (konfirmasi == 'y' || konfirmasi == 'Y');

    cout <<"Total harga pesanan Anda adalah Rp" << total_harga << endl;

    return 0;
}


