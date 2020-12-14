#/*include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    string text,shifrtext;
    setlocale(LC_ALL, "ru");
    ifstream inf("text.txt");

    if (!inf) {
        cerr << "Error #228 (Opening File)" << endl;
        exit(1);
    }

    while (inf) {
        getline(inf, text);

    }
    cout << text;

    cout << "\n\n\n\n" << endl;
    for (int i = 0; i < text.length(); i++) {

        cout << "Буква - " << text[i] << "\tКод - " << (int)text[i] << endl;


    }

    return 0;
}*/













#pragma warning(push)
#pragma warning(disable:4018)
#pragma warning(disable:6031)
#pragma warning(disable:6001)
#pragma warning(disable:6385)
#include "Header.h"
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    system("cls");
    while (1) {
        int vidsh = 0, vidde = 0;
        cout << "Шифровать или расшифровать? 1-1, 2-2" << endl;
        cin >> vidde;
        cout << "Выберите шифр 1-Цезаря, 2-Виженера" << endl;
        cin >> vidsh;

        switch (vidde) {
        case 1:
            switch (vidsh) {
            case 1:
                Crypt_Caesar();
                break;
            case 2:
                Crypt_Vigenere();
            default:
                exit(1);
            }
            break;
        case 2:
            switch (vidsh) {
            case 1:
                Decrypt_Caesar();
                break;
            case 2:Decrypt_Vigenere();
            default:
                exit(1);
            }
            break;
        default:
            exit(1);
        }
        _getch();
    }
    return 0;


}
#pragma warning(pop)