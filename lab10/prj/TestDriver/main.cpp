#include <iostream>
#include "ModulesOzhekhovskyi.h"
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
    int num = 5;

    char num2[1] = {0};
    itoa(num, num2, 2);
    cout << num2;

}
