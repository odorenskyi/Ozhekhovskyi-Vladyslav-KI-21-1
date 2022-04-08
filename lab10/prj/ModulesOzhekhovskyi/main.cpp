#include "ModulesOzhekhovskyi.h"
#include <bitset>
#include <sstream>
#include <fstream>
#include <ctime>

//Lab_8
double s_calculation(double x, double y, double z){
    return ( sin(x) / sqrt( fabs( (y * z) / (x + y) ) ) ) + (3 * pow(y, 5));
}
//Lab_9.1
tornado tornadoCategory(double speedWind){
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
//Lab_9.2
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
//Lab_9.3
int bitsNum(unsigned short int num){
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
//Lab_10
void filesToEdit(string outputFileName, string inputFileName){
    ofstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
		cout << "Неможливо відкрити файл для редагування\a" << endl;
        inputFile.close();
        outputFile.close();
		exit(1);
	}
	inputFile.close();
	outputFile.close();
}

bool inputTxtFile(string inputFileName, string inputText){
    ofstream inputFile(inputFileName, ios::out);
	inputFile << inputText << endl << endl;
	inputFile.close();
	return true;
}
//Lab_10.1
bool authorInfo(string outputFileName){
    ofstream outputFile(outputFileName, ios::out);
	outputFile << "====================================================================" << endl
               << " Виконавець:         Ожеховський Владислав" << endl
               << " Рік розробки:       2022" << endl
               << " Місто/Країна:       Кропивницький/Україна" << endl
               << " ВНЗ:                Центральний Національний Технічний Університет" << endl
               << "====================================================================" << endl << endl;
    outputFile.close();
    return true;
}

int numParagraphsInFile(string outputFileName, string textInInputFile){
    ofstream outputFile(outputFileName, ios::app);

    int numParagraphs = 1;

    for (int i = 0; i < textInInputFile.length(); i++) {
        if (textInInputFile[i] == '\n')
            numParagraphs++;
    }

    outputFile << "Кількість абзаців з вхідного файлу: " << numParagraphs << endl << endl;
    outputFile.close();
    return numParagraphs;
}

bool findWordInText(string outputFileName, string textInInputFile){
    ofstream outputFile(outputFileName, ios::app);

    size_t foundWord1 = textInInputFile.find("Україн");
    size_t foundWord2 = textInInputFile.find("університет");
    size_t foundWord3 = textInInputFile.find("блокнот");

    if (foundWord1 != string::npos)
        outputFile << "Знайдено слово 'Українa'" << endl << endl;
     else
        outputFile << "Cлово 'Україна' - не знайдено" << endl << endl;

    if (foundWord2 != string::npos)
        outputFile << "Знайдено слово 'університет'" << endl << endl;
     else
        outputFile << "Cлово 'університет' - не знайдено" << endl << endl;

    if (foundWord3 != string::npos)
        outputFile << "Знайдено слово 'блокнот'" << endl << endl;
     else
        outputFile << "Cлово 'блокнот' - не знайдено" << endl << endl;

    outputFile.close();
    return true;
}
//Lab_10.2
int numPunctuationMarksInFile(string inputFileName, string textInInputFile){
    ofstream inputTxtFile(inputFileName, ios::app);
    char punctuationMarks[10] = { ',', '.', ':', ';', '!', '?', '-', '(', ')' };
    int numPunctuationMarks = 0;

    for (int i = 0; i < textInInputFile.length(); i++) {
        for(int j = 0; j < 10; j++)
        if (punctuationMarks[j] == textInInputFile[i]) {
            numPunctuationMarks++;
        }
    }

    inputTxtFile << "Кількість знаків пунктуації вхідного файлу: "
                 << numPunctuationMarks << endl << endl;
    inputTxtFile.close();
    return numPunctuationMarks;
}

bool timestampInFile(string inputFileName){
    ofstream inputFile(inputFileName, ios::app);
    time_t rawtime;
    time(&rawtime);
    inputFile << "Дата та час дозапису інформаціїї: " << ctime(&rawtime) << endl << endl;
    inputFile.close();
    return true;
}
//Lab_10.3
double sCalculationResInFile(string outputFileName, double x, double y, double z){
    ofstream outputFile("outputFile.txt", ios::app);
    outputFile << "Результат виконання s_calculation: " << s_calculation(x, y, z) << endl << endl;
    outputFile.close();
    return s_calculation(x, y, z);
}

bool decimalToBinary(string outputFileName, unsigned int number){
    if (number <= 0) {
        return false;
    }
    ofstream outputFile(outputFileName, ios::app);
    int binaryCels[32];
    int i;
    unsigned int convertedNum = number;

    for(i = 0; convertedNum > 0; i++) {
        binaryCels[i] = convertedNum % 2;
        convertedNum = convertedNum / 2;
    }
    outputFile << "Двійкове представлення числа " << number << " : ";
    for(i = i - 1; i >= 0; i--) {
        outputFile << binaryCels[i];
    }
    outputFile << endl << endl;
    outputFile.close();
    return true;
}



