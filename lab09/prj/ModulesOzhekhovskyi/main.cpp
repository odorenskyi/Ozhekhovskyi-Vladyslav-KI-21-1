#include "ModulesOzhekhovskyi.h"
#include <bitset>
#include <iostream>
#include <sstream>

using namespace std;

double s_calculation(double x, double y, double z){
    return ( sin(x) / sqrt( fabs( (y * z) / (x + y) ) ) ) + (3 * pow(y, 5));
}

tornado tornadoCategory(int speedWind){
    if(speedWind < 64 || speedWind > 512){
        return {-1, "Incorrect value entered"};
    } else if(speedWind <= 116){
        return {0, "Tornado category: F0, Frequency: 38,9%"};
    } else if(speedWind <= 180){
        return {1, "Tornado category: F1, Frequency: 35,6%"};
    } else if(speedWind <= 253){
        return {2, "Tornado category: F2, Frequency: 19,4%"};
    } else if(speedWind <= 332){
        return {3, "Tornado category: F3, Frequency: 4,9%"};
    } else if(speedWind <= 418){
        return {4, "Tornado category: F4, Frequency: 1,1%"};
    } else if(speedWind <= 512){
        return {5, "Tornado category: F5, Frequency: <0,1%"};
    }
}

averageTemp averageDailyTemp(double sumTempC){
    double averageTempC = floor((sumTempC / 6) * 100) / 100;
    double averageTempF = floor(( sumTempC / 6 * 1.8 + 32 ) * 100) / 100;

    stringstream ss;
    ss << "Average daily temperature on the Celsius scale: "
       << averageTempC
       << ", Fahrenheit scale: "
       << averageTempF;

    return {averageTempC, averageTempF, ss.str()};
}

int bitsNum(unsigned short int num)
{
    if (num < 0 || num > 65535) {
        cout << "ERROR: number in invalid range!" << endl;
        return -1;
    }

    bitset<32> bNum{num};
    if (bNum[0]) {
        return 32 - bNum.count();
    }
    return bNum.count();
}


