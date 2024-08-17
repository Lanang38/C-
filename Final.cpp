#include <iostream>
#include <iomanip>  // Untuk pengaturan lebar tampilan
#include <cstdlib>  // Untuk fungsi system

using namespace std;

struct Item {
    string name;
    int stock;
    float price;
};

void displayItem(const Item &item) {
    cout << left << setw(20) << item.name    // Nama barang dengan lebar 20 karakter
         << setw(10) << item.stock  // Stok dengan lebar 10 karakter
         << "Rp " << setw(10) << fixed << setprecision(2) << item.price << endl;  // Harga dengan lebar 10 karakter
}

void addStock(Item &item, int quantity) {
    item.stock += quantity;
    cout << "Stok " << item.name << " berhasil ditambahkan.\n";
}

void reduceStock(Item &item, int quantity) {
    if (item.stock >= quantity) {
        item.stock -= quantity;
        cout << "Stok " << item.name << " berhasil dikurangi.\n";
    } else {
        cout << "Stok " << item.name << " tidak mencukupi.\n";
    }
}

void pause() {
    cout << "\nTekan Enter untuk kembali ke menu utama...";
    cin.ignore(); // Mengabaikan input sebelumnya
    cin.get();    // Menunggu pengguna menekan Enter
}

void clearScreen() {
    system("cls");  // Bersihkan layar konsol pada Windows
}

void showStockMenu(const Item &food1, const Item &food2, const Item &food3, const Item &drink1, const Item &drink2, const Item &drink3) {
    int viewChoice;
    clearScreen();  // Bersihkan layar sebelum menampilkan menu
    cout << "Pilih kategori untuk melihat stok:\n";
    cout << "1. Makanan\n";
    cout << "2. Minuman\n";
    cout << "Pilih opsi: ";
    cin >> viewChoice;

    if (viewChoice == 1) {
        cout << "Daftar Stok Makanan:\n";
        cout << left << setw(20) << "Nama"
             << setw(10) << "Stok"
             << "Harga" << endl;
        cout << "----------------------------------------\n";
        displayItem(food1);
        displayItem(food2);
        displayItem(food3);
    } else if (viewChoice == 2) {
        cout << "Daftar Stok Minuman:\n";
        cout << left << setw(20) << "Nama"
             << setw(10) << "Stok"
             << "Harga" << endl;
        cout << "----------------------------------------\n";
        displayItem(drink1);
        displayItem(drink2);
        displayItem(drink3);
    } else {
        cout << "Pilihan tidak valid.\n";
    }

    pause();  // Tunggu input pengguna sebelum kembali ke menu utama
}

void addStockMenu(Item &food1, Item &food2, Item &food3, Item &drink1, Item &drink2, Item &drink3) {
    int category, itemNumber, quantity;
    clearScreen();  // Bersihkan layar sebelum menampilkan menu
    cout << "Pilih kategori\n";
    cout << "1. Makanan\n";
    cout << "2. Minuman\n";
    cout << "3. Kembali ke menu utama\n";
    cout << "Pilih opsi: ";
    cin >> category;

    if (category == 1) {
        clearScreen();
        cout << "Pilih nomor item yang ingin ditambah stoknya\n";
        cout << "1. Nasi Goreng\n";
        cout << "2. Mie Goreng\n";
        cout << "3. Sate Ayam\n";
        cout << "4. Kembali ke menu utama\n";
        cout << "Pilih opsi: ";
        cin >> itemNumber;

        if (itemNumber == 1 || itemNumber == 2 || itemNumber == 3) {
            cout << "Masukkan jumlah stok yang ingin ditambahkan: ";
            cin >> quantity;
            if (itemNumber == 1)
                addStock(food1, quantity);
            else if (itemNumber == 2)
                addStock(food2, quantity);
            else if (itemNumber == 3)
                addStock(food3, quantity);
        } else if (itemNumber == 4) {
            return;
        } else {
            cout << "Nomor item tidak valid.\n";
        }
    } else if (category == 2) {
        clearScreen();
        cout << "Pilih nomor item yang ingin ditambah stoknya\n";
        cout << "1. Teh Botol\n";
        cout << "2. Air Mineral\n";
        cout << "3. Jus Jeruk\n";
        cout << "4. Kembali ke menu utama\n";
        cout << "Pilih opsi: ";
        cin >> itemNumber;

        if (itemNumber == 1 || itemNumber == 2 || itemNumber == 3) {
            cout << "Masukkan jumlah stok yang ingin ditambahkan: ";
            cin >> quantity;
            if (itemNumber == 1)
                addStock(drink1, quantity);
            else if (itemNumber == 2)
                addStock(drink2, quantity);
            else if (itemNumber == 3)
                addStock(drink3, quantity);
        } else if (itemNumber == 4) {
            return;
        } else {
            cout << "Nomor item tidak valid.\n";
        }
    } else if (category == 3) {
        return;
    } else {
        cout << "Kategori tidak valid.\n";
    }

    pause();  // Tunggu input pengguna sebelum kembali ke menu utama
}

void reduceStockMenu(Item &food1, Item &food2, Item &food3, Item &drink1, Item &drink2, Item &drink3) {
    int category, itemNumber, quantity;
    clearScreen();  // Bersihkan layar sebelum menampilkan menu
    cout << "Pilih kategori\n";
    cout << "1. Makanan\n";
    cout << "2. Minuman\n";
    cout << "3. Kembali ke menu utama\n";
    cout << "Pilih opsi: ";
    cin >> category;

    if (category == 1) {
        clearScreen();
        cout << "Pilih nomor item yang ingin dikurangi stoknya\n";
        cout << "1. Nasi Goreng\n";
        cout << "2. Mie Goreng\n";
        cout << "3. Sate Ayam\n";
        cout << "4. Kembali ke menu utama\n";
        cout << "Pilih opsi: ";
        cin >> itemNumber;

        if (itemNumber == 1 || itemNumber == 2 || itemNumber == 3) {
            cout << "Masukkan jumlah stok yang ingin dikurangi: ";
            cin >> quantity;
            if (itemNumber == 1)
                reduceStock(food1, quantity);
            else if (itemNumber == 2)
                reduceStock(food2, quantity);
            else if (itemNumber == 3)
                reduceStock(food3, quantity);
        } else if (itemNumber == 4) {
            return;
        } else {
            cout << "Nomor item tidak valid.\n";
        }
    } else if (category == 2) {
        clearScreen();
        cout << "Pilih nomor item yang ingin dikurangi stoknya\n";
        cout << "1. Teh Botol\n";
        cout << "2. Air Mineral\n";
        cout << "3. Jus Jeruk\n";
        cout << "4. Kembali ke menu utama\n";
        cout << "Pilih opsi: ";
        cin >> itemNumber;

        if (itemNumber == 1 || itemNumber == 2 || itemNumber == 3) {
            cout << "Masukkan jumlah stok yang ingin dikurangi: ";
            cin >> quantity;
            if (itemNumber == 1)
                reduceStock(drink1, quantity);
            else if (itemNumber == 2)
                reduceStock(drink2, quantity);
            else if (itemNumber == 3)
                reduceStock(drink3, quantity);
        } else if (itemNumber == 4) {
            return;
        } else {
            cout << "Nomor item tidak valid.\n";
        }
    } else if (category == 3) {
        return;
    } else {
        cout << "Kategori tidak valid.\n";
    }

    pause();  // Tunggu input pengguna sebelum kembali ke menu utama
}

int main() {
    // Makanan
    Item food1 = {"Nasi Goreng", 100, 15000.0};
    Item food2 = {"Mie Goreng", 80, 12000.0};
    Item food3 = {"Sate Ayam", 50, 20000.0};

    // Minuman
    Item drink1 = {"Teh Botol", 50, 5000.0};
    Item drink2 = {"Air Mineral", 75, 3000.0};
    Item drink3 = {"Jus Jeruk", 30, 10000.0};

    int choice;
    do {
        clearScreen();  // Bersihkan layar konsol sebelum menampilkan menu utama
        cout << "============================\n";
        cout << "==== Sistem Pergudangan ====\n";
        cout << "============================\n\n";
        cout << "1. Tampilkan Stok\n";
        cout << "2. Tambah Stok\n";
        cout << "3. Kurangi Stok\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showStockMenu(food1, food2, food3, drink1, drink2, drink3);
                break;
            case 2:
                addStockMenu(food1, food2, food3, drink1, drink2, drink3);
                break;
            case 3:
                reduceStockMenu(food1, food2, food3, drink1, drink2, drink3);
                break;
            case 4:
                cout << "Keluar dari sistem. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
        }

    } while (choice != 4);

    return 0;
}
