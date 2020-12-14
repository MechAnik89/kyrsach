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

        cout << "����� - " << text[i] << "\t��� - " << (int)text[i] << endl;


    }

    return 0;
}*/













#pragma warning(push)
#pragma warning(disable:4018)
#pragma warning(disable:6031)
#pragma warning(disable:6001)
#pragma warning(disable:6385)
#include <ctime>
#include <string>
#include <iostream>
#include <conio.h>
#include<fstream>

using namespace std;

void Crypt_Vigenere() {

    string B, C, D = "";
    string A = "abcdefghijklmnopqrstuvwxyz"; //��� �������
    setlocale(LC_ALL, "Rus");
    cout << "������� �����: ";
    cin >> B;
    cout << "������� ����: ";
    cin >> C;
    int* F = new int[B.size()];
    int* G = new int[B.size()];
    int c = C.size(); //������ ������ ���������� ��� ��������
    int b = B.size();
    //������ �������. ���� ����� ��������� ����� ������, ���� ����� ����� �����
    if (b >= c)
    {
        for (int i = 0; i < (b / c); i++)
        {
            D = D + C; //���������� ����� ���������� �����. ���������� ���� �� ����� �����.
        }
        for (int j = 0; j < (b % c); j++)
        {
            D = D + C[j];
        }
    }
    else  //����� ���� ���� ������� �����, ����������� ���� �� ����� �����.
    {
        for (int s = 0; s < b; s++)
        {
            D = D + B[s];
        }
    }
    //cout << D << endl;
    for (int k = 0; k < b; k++)
    {
        for (int n = 0; n < 26; n++)
        {
            if (B[k] == A[n])
            {
                F[k] = n;
            }

            if (D[k] == A[n])
            {
                G[k] = n;
            } //����� �� ��� �������� ���������. ����� ����������� ����, ��� �� ���� ����� ����� �� �������� ����� � ������, � ����� ���� ���������� �� � ������

        }
    }

    int e = 0; //��� ����� ������� ��������. ����� ��� ���������� 26 �����, ��������� ��� �� �����, ������� � ������� ������
    for (int u = 0; u < b; u++)
    {
        e = ((F[u] + G[u]) % 26);
        B[u] = A[e];
    }

    cout << "������������� �����: " << B << endl;

}

void Decrypt_Vigenere() {

    string B, C, D = "";
    string A = "abcdefghijklmnopqrstuvwxyz"; //��� �������
    setlocale(LC_ALL, "Rus");
    cout << "������� �����: ";
    cin >> B;
    cout << "������� ����: ";
    cin >> C;
    int* F = new int[B.size()];
    int* G = new int[B.size()];
    int c = C.size(); //������ ������ ���������� ��� ��������
    int b = B.size();
    //������ �������. ���� ����� ��������� ����� ������, ���� ����� ����� �����
    if (b >= c)
    {
        for (int i = 0; i < (b / c); i++)
        {
            D = D + C; //���������� ����� ���������� �����. ���������� ���� �� ����� �����.
        }
        for (int j = 0; j < (b % c); j++)
        {
            D = D + C[j];
        }
    }
    else  //����� ���� ���� ������� �����, ����������� ���� �� ����� �����.
    {
        for (int s = 0; s < b; s++)
        {
            D = D + B[s];
        }
    }
    //cout << D << endl;
    for (int k = 0; k < b; k++)
    {
        for (int n = 0; n < 26; n++)
        {
            if (B[k] == A[n])
            {
                F[k] = n;
            }

            if (D[k] == A[n])
            {
                G[k] = n;
            } //����� �� ��� �������� ���������. ����� ����������� ����, ��� �� ���� ����� ����� �� �������� ����� � ������, � ����� ���� ���������� �� � ������

        }
    }

    int e = 0; //��� ����� ������� ��������. ����� ��� ���������� 26 �����, ��������� ��� �� �����, ������� � ������� ������

    for (int u = 0; u < b; u++)
    {
        e = ((F[u] - G[u]));
        if (e < 0)
            e += 26;
        B[u] = A[e];
    }
    cout << "������������� �����: " << B << endl;
}

void Crypt_Caesar() {

    int key = 0;
    cout << "������� ����" << endl;
    cin >> key;
    char* buff = new char;
    cout << "������� ���������,������� ����� �������������" << endl;
    cin >> buff;

    for (int i = 0; i < strlen(buff); i++)
        buff[i] += key;
    cout << buff << endl;

}

void Decrypt_Caesar() {


    int key = 0;
    cout << "������� ����" << endl;
    cin >> key;
    char* buff = new char;
    cout << "������� ���������,������� ����� �������������" << endl;
    cin >> buff;

    cout << "Decode: " << endl;
    for (int i = 0; i < strlen(buff); i++)
        buff[i] -= key;
    cout << buff << endl;

}

int main()
{
    setlocale(LC_ALL, "ru");
    system("cls");
    while (1) {
        int vidsh = 0, vidde = 0;
        cout << "��������� ��� ������������? 1-1, 2-2" << endl;
        cin >> vidde;
        cout << "�������� ���� 1-������, 2-��������" << endl;
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