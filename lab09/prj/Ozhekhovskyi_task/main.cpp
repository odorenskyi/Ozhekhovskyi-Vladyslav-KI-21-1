#include <iostream>
#include <conio.h>
#include "ModulesOzhekhovskyi.h"

using namespace std;

int main()
{
    char sym;

    do{
        cout << endl << "Enter one of the symbols 'z', 'r', 's', 't', 'q', 'Q': ";
        cin >> sym;

        switch (sym) {
        case 'z':
            cout << endl << "function s_calcuation(): " << endl;
            double x, y, z;
            cout << "Enter x: ";
            cin >> x;
            cout << "Enter y: ";
            cin >> y;
            cout << "Enter z: ";
            cin >> z;
            cout << "Result of s_calculation(): "
                 << s_calculation(x, y, z) << endl;
            break;
        case 'r':
            cout << endl << "function tornadoCategory():" << endl;
            double speedWind;
            cout << "Enter speed wind: ";
            cin >> speedWind;
            cout << "Result of tornadoCategory(): F"
                 << tornadoCategory(speedWind).category << endl;
            break;
        case 's':
            cout << endl << "function averageDailyTemp():" << endl;
            double temp;
            unsigned short int time;
            double sumTemp;
            for (int i = 0; i < 6; i++) {
                cout << "Enter the temperature at " << time << ":00 : ";
                cin >> temp;
                sumTemp += temp;
                time += 4;
            }
            cout << "Result of averageDailyTemp(): "
                 << averageDailyTemp(sumTemp).description << endl;
            break;
        case 't':
            cout << endl;
            cout << "function bitsNum():" << endl;
            unsigned short int num;
            cout << "Enter integer number 1 - 65535: ";
            cin >> num;
            cout << "Result of bitsNum(): " << bitsNum(num) << endl;
            break;
        default:
            cout << "\a";
        }
    }while (sym != 'q' && sym != 'Q');
}
