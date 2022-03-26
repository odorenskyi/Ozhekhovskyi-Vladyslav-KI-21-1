#include <iostream>
#include "ModulesOzhekhovskyi.h"
#include <conio.h>

using namespace std;

int main()
{
    int speedWindInput[3] = {223, 78, 346};
    int expectedResult[3] = {2, 0, 4};

    for(int i = 0; i < 3; i++){
        cout << "TC01_0" << i + 1 << ":" << endl;
        cout << "Speed wind = " << speedWindInput[i] << endl;
        cout << "Expected result: F" << expectedResult[i] << endl;
        cout << "The result obtained: " << tornadoCategory(speedWindInput[i]).description << endl;
        cout << "Test result: "
             << ((expectedResult[i] == tornadoCategory(speedWindInput[i]).category)? "Passed" : "Failed")
             << endl << endl;
    }


    int tempInput[3][6] = {3, 2, 4, 9, 14, 10,
                           4, 2, 7, 12, 16, 12,
                           -5, -6, -2, 0, -1, -2};
    double expectedResult2[3] = {7, 8.83, -2.67};

    for(int i = 0; i < 3; i++){
        double sumTemp = tempInput[i][0] + tempInput[i][1] + tempInput[i][2] +
                         tempInput[i][3] + tempInput[i][4] + tempInput[i][5];
        cout << "TC02_0" << i + 1 << ":" << endl;
        cout << "Sum temperature = " << sumTemp << endl;
        cout << "Expected result on the Celsius scale: " << expectedResult2[i] << endl;
        cout << "The result obtained: " << endl << averageDailyTemp(sumTemp).description << endl;
        cout << "Test result: "
             << ((expectedResult2[i] == averageDailyTemp(sumTemp).averageTempC)? "Passed" : "Failed")
             << endl << endl;
    }


    unsigned short int numInput[3] = {13792, 236, 45422};
    unsigned short int expectedResult3[3] = {7, 5, 9};

    for(int i = 0; i < 3; i++){
        cout << "TC03_0" << i + 1 << ":" << endl;
        cout << "Num input = " << numInput[i] << endl;
        cout << "Expected result: " << expectedResult3[i] << endl;
        cout << "The result obtained: " << bitsNum(numInput[i]) << endl;
        cout << "Test result: "
             << ((expectedResult3[i] == bitsNum(numInput[i]))? "Passed" : "Failed")
             << endl << endl;
    }

    getch();
}
