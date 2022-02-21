#include <iostream>
#include <conio.h>

#include "ModulesOzhekhovskyi.h"

using namespace std;

int main()
{
    double valueX[5] = { 5, 4.5, 7.8, 0.5, 11 };
    double valueY[5] = { 3, 6.3, 2, -4.3, -3 };
    double valueZ[5] = { 9, 1.2, 3.6, 15, 2.6 };

    double expectedResult[5] = { 728.478, 29771.927, 97.164, -4410.137, -730.013 };
    string testResult = "False";
    double result = 0;

    for (int i = 0; i < 5; i++) {
        cout.precision(3);
        cout.setf(std::ios::fixed);
        result = floor( s_calculation(valueX[i], valueY[i], valueZ[i]) * 1000) / 1000;

        if (result == expectedResult[i]) {
            testResult = "True";
        }

        cout << "Test case #" << i + 1 << ": " << endl;
        cout << "X = " << valueX[i] << endl;
        cout << "Y = " << valueY[i] << endl;
        cout << "Z = " << valueZ[i] << endl;
        cout << "Expected result: " << expectedResult[i] << endl;
        cout << "The result obtained: " << result << endl;
        cout << "Test result: " << testResult << endl << endl;
        testResult = "False";
    }
    getch();

    return 0;
}
