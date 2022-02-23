#include <iostream>
#include <windows.h>
#include <conio.h>
#include <clocale>

#include "ModulesOzhekhovskyi.h"

using namespace std;

string authorCopyright(){
    return "© Ожеховський Владислав";
}

bool logicalExpression(double a, double b){
    return (a + 1) < (b + 3);
}

void showDecimalHexNums(int x, int y, int z){
    cout << endl << "x в десятковій: " << dec << x << endl;
    cout << "y в десятковій: " << dec << y << endl;
    cout << "z в десятковій: " << dec << z << endl << endl;

    cout << "x в шістнадцятковій: " << hex << x << endl;
    cout << "y в шістнадцятковій: " << hex << y << endl;
    cout << "z в шістнадцятковій: " << hex << z << endl;
}

int main(){
    system("chcp 65001 & cls");

    int x = 0;
    int y = 0;
    int z = 0;
    double a = 0;
    double b = 0;

    cout << authorCopyright() << endl;

    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    cout << "Результат логічного виразу (a + 1) < (b + 3): "
         << logicalExpression(a, b) << endl << endl;

    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть число y: ";
    cin >> y;
    cout << "Введіть число z: ";
    cin >> z;

    showDecimalHexNums(x, y, z);

    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    getch();
    return 0;
}
