#ifndef MODULESOZHEKHOVSKYI_H_INCLUDED
#define MODULESOZHEKHOVSKYI_H_INCLUDED

#include <cmath>
#include <string>

struct tornado {
    int category = -1;
    std::string description = "";
};

struct averageTemp{
    double averageTempC;
    double averageTempF;
    std::string description = "";

};

double s_calculation(double x, double y, double z);

tornado tornadoCategory(int speedWind);

averageTemp averageDailyTemp(double sumTempC);

int bitsNum(unsigned short int num);

#endif // MODULESOZHEKHOVSKYI_H_INCLUDED
