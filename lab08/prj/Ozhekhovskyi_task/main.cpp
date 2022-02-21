#include <iostream>
#include <windows.h>
#include <conio.h>

#include "ModulesOzhekhovskyi.h"

using namespace std;

string authorCopyright(){
    return "© ќжеховський ¬ладислав";
}

bool logicalExpression(double a, double b){
    return (a + 1) < (b + 3);
}

void showDecimalHexNums(int x, int y, int z){
    cout << endl << "x в дес€тков≥й: " << dec << x << endl;
    cout << "y в дес€тков≥й: " << dec << y << endl;
    cout << "z в дес€тков≥й: " << dec << z << endl << endl;

    cout << "x в ш≥стнадц€тков≥й: " << hex << x << endl;
    cout << "y в ш≥стнадц€тков≥й: " << hex << y << endl;
    cout << "z в ш≥стнадц€тков≥й: " << hex << z << endl;
}

int main(){
    SetConsoleOutputCP(1251);

    int x = 0;
    int y = 0;
    int z = 0;
    double a = 0;
    double b = 0;

    cout << authorCopyright() << endl;

    cout << "¬вед≥ть число a: ";
    cin >> a;
    cout << "¬вед≥ть число b: ";
    cin >> b;

    cout << "–езультат лог≥чного виразу (a + 1) < (b + 3): "
         << logicalExpression(a, b) << endl << endl;

    cout << "¬вед≥ть число x: ";
    cin >> x;
    cout << "¬вед≥ть число y: ";
    cin >> y;
    cout << "¬вед≥ть число z: ";
    cin >> z;

    showDecimalHexNums(x, y, z);

    cout << endl << "–езультат виразу: " << s_calculation(x, y, z);
    getch();
    return 0;
}
