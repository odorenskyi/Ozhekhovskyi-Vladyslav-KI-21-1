#include <iostream>
#include <windows.h>
#include <conio.h>
#include <locale.h>

#include "ModulesOzhekhovskyi.h"

using namespace std;

string authorCopyright(){
    return "� ����������� ���������";
}

bool logicalExpression(double a, double b){
    return (a + 1) < (b + 3);
}

void showDecimalHexNums(int x, int y, int z){
    cout << endl << "x � ���������: " << dec << x << endl;
    cout << "y � ���������: " << dec << y << endl;
    cout << "z � ���������: " << dec << z << endl << endl;

    cout << "x � ��������������: " << hex << x << endl;
    cout << "y � ��������������: " << hex << y << endl;
    cout << "z � ��������������: " << hex << z << endl;
}

int main(){
    //SetConsoleOutputCP(1251);
        system("chcp 1251");

    int x = 0;
    int y = 0;
    int z = 0;
    double a = 0;
    double b = 0;

    cout << authorCopyright() << endl;

    cout << "������ ����� a: ";
    cin >> a;
    cout << "������ ����� b: ";
    cin >> b;

    cout << "��������� �������� ������ (a + 1) < (b + 3): "
         << logicalExpression(a, b) << endl << endl;

    cout << "������ ����� x: ";
    cin >> x;
    cout << "������ ����� y: ";
    cin >> y;
    cout << "������ ����� z: ";
    cin >> z;

    showDecimalHexNums(x, y, z);

    cout << endl << "��������� ������: " << s_calculation(x, y, z);
    getch();
    return 0;
}
