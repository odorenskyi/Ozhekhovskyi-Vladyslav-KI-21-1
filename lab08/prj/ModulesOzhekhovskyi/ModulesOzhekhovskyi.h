#ifndef MODULESOZHEKHOVSKYI_H_INCLUDED
#define MODULESOZHEKHOVSKYI_H_INCLUDED

#include <cmath>

double s_calculation(double x, double y, double z){
    return ( sin(x) / sqrt( fabs( (y * z) / (x + y) ) ) ) + (3 * pow(y, 5));
}


#endif // MODULESOZHEKHOVSKYI_H_INCLUDED
