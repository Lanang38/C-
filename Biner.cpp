#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary;
}

string decimalToOctal(int decimal) {
    string octal = "";
    while (decimal > 0) {
        octal = to_string(decimal % 8) + octal;
        decimal /= 8;
    }
    return octal.empty() ? "0" : octal;
}

string decimalToHexadecimal(int decimal) {
    string hexadecimal = "";
    char hexDigits[] = "0123456789ABCDEF";
    while (decimal > 0) {
        hexadecimal = hexDigits[decimal % 16] + hexadecimal;
        decimal /= 16;
    }
    return hexadecimal.empty() ? "0" : hexadecimal;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char digit : binary) {
        decimal = decimal * 2 + (digit - '0');
    }
    return decimal;
}

int octalToDecimal(string octal) {
    int decimal = 0;
    for (char digit : octal) {
        decimal = decimal * 8 + (digit - '0');
    }
    return decimal;
}

int hexadecimalToDecimal(string hexadecimal) {
    int decimal = 0;
    for (char digit : hexadecimal) {
        if (digit >= '0' && digit <= '9') {
            decimal = decimal * 16 + (digit - '0');
        } else if (digit >= 'A' && digit <= 'F') {
            decimal = decimal * 16 + (digit - 'A' + 10);
        }
    }
    return decimal;
}

int main() {
    bool lanjut = true;
    
    while (lanjut) {
        int inputBase, outputBase;
        string input;

        system("cls");
        cout << "========================================================\n";
        cout << "======================= CONVERSI =======================\n";
        cout << "========================================================\n\n";
        cout << "Pilih basis input :\n";
        cout << "1. Biner\n";
        cout << "2. Desimal\n";
        cout << "3. Oktal\n";
        cout << "4. Heksadesimal\n";
        cout << "5. Keluar\n";
        cout << "Pilih : ";
        cin >> inputBase;

        if (inputBase < 1 || inputBase > 5) {
            cout << "Pilihan tidak valid!" << endl;
            continue;
        }
        
        if (inputBase == 5) {
            cout << "Keluar dari program." << endl;
            break;
        }

        cout << "Masukkan bilangan : ";
        cin >> input;
        
        int decimalValue = 0;

        // Konversi input ke desimal
        switch (inputBase) {
            case 1:
                decimalValue = binaryToDecimal(input);
                break;
            case 2:
                decimalValue = stoi(input);
                break;
            case 3:
                decimalValue = octalToDecimal(input);
                break;
            case 4:
                decimalValue = hexadecimalToDecimal(input);
                break;
        }

        // Pilih output basis
        cout << "Pilih basis output :\n";
        cout << "1. Biner\n";
        cout << "2. Desimal\n";
        cout << "3. Oktal\n";
        cout << "4. Heksadesimal\n";
        cout << "5. Keluar\n";
        cout << "Pilih : ";
        cin >> outputBase;

        if (outputBase < 1 || outputBase > 5) {
            cout << "Pilihan tidak valid!" << endl;
            continue;
        }

        if (outputBase == 5) {
            cout << "Keluar dari program." << endl;
            break;
        }

        // Konversi dari desimal ke basis yang dipilih
        string output;
        switch (outputBase) {
            case 1:
                output = decimalToBinary(decimalValue);
                break;
            case 2:
                output = to_string(decimalValue);
                break;
            case 3:
                output = decimalToOctal(decimalValue);
                break;
            case 4:
                output = decimalToHexadecimal(decimalValue);
                break;
        }

        cout << "Hasil konversi: " << output << endl;

        char pilihanLanjut;
        cout << "Apakah ingin melanjutkan konversi? (y/n): ";
        cin >> pilihanLanjut;
        
        if (pilihanLanjut == 'n' || pilihanLanjut == 'N') {
            cout << "Terima kasih telah menggunakan program ini!" << endl;
            lanjut = false;
        }
    }

    return 0;
}
