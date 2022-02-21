#include "ModulesOzhekhovskyi.h"

double s_calculation(double x, double y, double z){
    return ( sin(x) / sqrt( fabs( (y * z) / (x + y) ) ) ) + (3 * pow(y, 5));
}

int main (){
    return 0;
}
