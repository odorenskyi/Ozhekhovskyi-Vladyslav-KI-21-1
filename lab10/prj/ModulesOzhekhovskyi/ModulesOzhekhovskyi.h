#ifndef MODULESOZHEKHOVSKYI_H_INCLUDED
#define MODULESOZHEKHOVSKYI_H_INCLUDED
#include <iostream>

#include <cmath>
#include <cstring>

using namespace std;

struct tornado {
    int category = -1;
    string description = "";
};

struct averageTemp{
    double averageTempC;
    double averageTempF;
    string description = "";

};

double s_calculation(double x, double y, double z);

tornado tornadoCategory(double speedWind);
averageTemp averageDailyTemp(double sumTempC);
int bitsNum(unsigned short int num);

void filesToEdit(string outputFileName, string inputFileName);
bool inputTxtFile(string inputFileName, string inputText);
string inputText();
bool authorInfo(string outputFileName);
int numParagraphsInFile(string outputFileName, string textInInputFile);
bool findWordInText(string outputFileName, string textInInputFile);
int numPunctuationMarksInFile(string inputFileName, string textInInputFile);
bool timestampInFile(string inputFileName);
double sCalculationResInFile(string outputFileName, double x, double y, double z);
bool decimalToBinary(string outputFileName, unsigned int number);

#endif // MODULESOZHEKHOVSKYI_H_INCLUDED
