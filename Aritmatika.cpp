#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int pilihanUtama;
    int pilihanSubmenu;
    int pilihanOperasi;
    double hasil;
    char ulangi;

    do
    {
        system("cls");
        cout << "===================================================================\n";
        cout << "========================APLIKASI ARITMATIKA========================\n";
        cout << "===================================================================\n\n";  
        cout << "Pilih jenis bangun yang ingin dihitung:\n";
        cout << "1. Bangun Datar (2 Dimensi)\n";
        cout << "2. Bangun Ruang (3 Dimensi)\n";
        cout << "3. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihanUtama;

        if (pilihanUtama == 3)
        {
            cout << "Terimakasih telah menggunakan program ini!" << endl;
            break;
        }

        if (pilihanUtama == 1)
        {
            system("cls");
            cout << "\nPilih bangun datar yang ingin dihitung:\n";
            cout << "1. Lingkaran\n";
            cout << "2. Persegi\n";
            cout << "3. Segitiga\n";
            cout << "4. Persegi Panjang\n";
            cout << "5. Kembali ke menu utama\n";
            cout << "Masukkan pilihan: ";
            cin >> pilihanSubmenu;

            if (pilihanSubmenu < 1 || pilihanSubmenu > 5)
            {
                cout << "Pilihan tidak valid, kembali ke menu utama." << endl;
                cout << "\nTekan Enter untuk kembali ke menu utama...";
                cin.ignore();
                cin.get();
                continue;
            }

            if (pilihanSubmenu == 5)
            {
                continue;
            }

            cout << "\nPilih operasi yang ingin dilakukan:\n";
            cout << "1. Luas\n";
            cout << "2. Keliling\n";
            cout << "Masukkan pilihan (1/2): ";
            cin >> pilihanOperasi;

            if (pilihanOperasi != 1 && pilihanOperasi != 2)
            {
                cout << "Pilihan operasi tidak valid!" << endl;
                cout << "\nTekan Enter untuk kembali ke menu utama...";
                cin.ignore();
                cin.get();
                continue;
            }

            if (pilihanSubmenu == 1)
            {
                double jariJari;
                cout << "Masukkan jari-jari lingkaran: ";
                cin >> jariJari;
                if (pilihanOperasi == 1)
                {
                    hasil = M_PI * jariJari * jariJari;
                    cout << "Luas lingkaran adalah: " << hasil << endl;
                }
                else if (pilihanOperasi == 2)
                {
                    hasil = 2 * M_PI * jariJari;
                    cout << "Keliling lingkaran adalah: " << hasil << endl;
                }
            }
            else if (pilihanSubmenu == 2)
            {
                double sisi;
                cout << "Masukkan panjang sisi persegi: ";
                cin >> sisi;
                if (pilihanOperasi == 1)
                {
                    hasil = sisi * sisi;
                    cout << "Luas persegi adalah: " << hasil << endl;
                }
                else if (pilihanOperasi == 2)
                {
                    hasil = 4 * sisi;
                    cout << "Keliling persegi adalah: " << hasil << endl;
                }
            }
            else if (pilihanSubmenu == 3)
            {
                double alas, tinggi, sisi1, sisi2, sisi3;
                cout << "Masukkan alas segitiga: ";
                cin >> alas;
                cout << "Masukkan tinggi segitiga: ";
                cin >> tinggi;
                if (pilihanOperasi == 1)
                {
                    hasil = 0.5 * alas * tinggi;
                    cout << "Luas segitiga adalah: " << hasil << endl;
                }
                else if (pilihanOperasi == 2)
                {
                    cout << "Masukkan panjang sisi 1: ";
                    cin >> sisi1;
                    cout << "Masukkan panjang sisi 2: ";
                    cin >> sisi2;
                    cout << "Masukkan panjang sisi 3: ";
                    cin >> sisi3;
                    hasil = sisi1 + sisi2 + sisi3;
                    cout << "Keliling segitiga adalah: " << hasil << endl;
                }
            }
            else if (pilihanSubmenu == 4)
            {
                double panjang, lebar;
                cout << "Masukkan panjang persegi panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar persegi panjang: ";
                cin >> lebar;
                if (pilihanOperasi == 1)
                {
                    hasil = panjang * lebar;
                    cout << "Luas persegi panjang adalah: " << hasil << endl;
                }
                else if (pilihanOperasi == 2)
                {
                    hasil = 2 * (panjang + lebar);
                    cout << "Keliling persegi panjang adalah: " << hasil << endl;
                }
            }
        }
        else if (pilihanUtama == 2)
        {
            system("cls");
            cout << "\nPilih bangun ruang yang ingin dihitung volumenya:\n";
            cout << "1. Kubus\n";
            cout << "2. Balok\n";
            cout << "3. Bola\n";
            cout << "4. Tabung\n";
            cout << "5. Kerucut\n";
            cout << "6. Kembali ke menu utama\n";
            cout << "Masukkan pilihan: ";
            cin >> pilihanSubmenu;

            if (pilihanSubmenu == 6)
            {
                continue;
            }

            if (pilihanSubmenu == 1)
            {
                double sisi;
                cout << "Masukkan panjang sisi kubus: ";
                cin >> sisi;
                hasil = pow(sisi, 3);
                cout << "Volume kubus adalah: " << hasil << endl;
            }
            else if (pilihanSubmenu == 2)
            {
                double panjang, lebar, tinggi;
                cout << "Masukkan panjang balok: ";
                cin >> panjang;
                cout << "Masukkan lebar balok: ";
                cin >> lebar;
                cout << "Masukkan tinggi balok: ";
                cin >> tinggi;
                hasil = panjang * lebar * tinggi;
                cout << "Volume balok adalah: " << hasil << endl;
            }
            else if (pilihanSubmenu == 3)
            {
                double jariJari;
                cout << "Masukkan jari-jari bola: ";
                cin >> jariJari;
                hasil = (4.0 / 3.0) * M_PI * pow(jariJari, 3);
                cout << "Volume bola adalah: " << hasil << endl;
            }
            else if (pilihanSubmenu == 4)
            {
                double jariJari, tinggi;
                cout << "Masukkan jari-jari tabung: ";
                cin >> jariJari;
                cout << "Masukkan tinggi tabung: ";
                cin >> tinggi;
                hasil = M_PI * pow(jariJari, 2) * tinggi;
                cout << "Volume tabung adalah: " << hasil << endl;
            }
            else if (pilihanSubmenu == 5)
            {
                double jariJari, tinggi;
                cout << "Masukkan jari-jari kerucut: ";
                cin >> jariJari;
                cout << "Masukkan tinggi kerucut: ";
                cin >> tinggi;
                hasil = (1.0 / 3.0) * M_PI * pow(jariJari, 2) * tinggi;
                cout << "Volume kerucut adalah: " << hasil << endl;
            }
            else
            {
                cout << "Pilihan bangun ruang tidak valid!" << endl;
            }
        }
        else
        {
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << "\nTekan Enter untuk kembali ke menu utama...";
        cin.ignore();
        cin.get();

    } while (true);

    return 0;
}
