#include <iostream>
#include "ModulesOzhekhovskyi.h"
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
    system("chcp 65001 & cls");

    const string inputText[5] = { "Ще не вмерла України і слава, і воля.\n"
                                  "Ще нам, браття молодії, усміхнеться доля.\n"
                                  "Згинуть наші вороженьки, як роса на сонці,\n"
                                  "Запануєм і ми, браття, у своїй сторонці.",
                                  "Наш клас писав про навчальні заклади, я написав про університет.",
                                  "В блокнот люди записують якусь інформацію.",
                                  "Душу й тіло ми положим за нашу свободу,\n"
                                  "І покажем, що ми, браття, козацького роду.",
                                  "А завзяття, праця щира свого ще докаже,\n"
                                  "Ще ся волі в Україні піснь гучна розляже,\n"
                                  "За Карпати відоб'ється, згомонить степами,\n"
                                  "України слава стане поміж ворогами." };
    const int numPunctuationMarks[5] = {10, 2, 1, 5, 6};
    const int numParagraphs[5] = {4, 1, 1, 2, 4};

    const double sCalcX[5] = { 6, 3.3, 7, 0.5, 14 };
    const double sCalcY[5] = { 3, -4, 0.8, -1, 2 };
    const double sCalcZ[5] = { -1, 0.5, 2, 7, 3 };
    const unsigned int naturalNum[5] = {5, 27, 422, 156, 5238 };
    const double expectedResult[5] = { 728.516, -3072.094, 2.433, -2.872, 97.617 };

    for(int i = 0; i < 5; i++){
        filesToEdit("outputFile.txt", "inputFile.txt");
        cout << boolalpha
             << "Запис тексту до вхідного файлу: \t\t\t\t\t\t\t\t"
             << inputTxtFile("inputFile.txt", inputText[i]) << endl;
        cout << boolalpha
             << "10.1(1) - Запис авторської інформації до вихідного файлу: \t\t\t\t\t"
             << authorInfo("outputFile.txt") << endl;
        cout << boolalpha
             << "10.1(2) - Результат підрахунку кількості абзаців та дозапис до вихідного файлу: \t\t"
             << (numParagraphsInFile("outputFile.txt", inputText[i]) == numParagraphs[i]) << endl;
        cout << boolalpha
             << "10.1(3) - Результат пошуку слів та дозапис до вихідного файлу: \t\t\t\t\t"
             << findWordInText("outputFile.txt", inputText[i]) << endl;
        cout << boolalpha
             << "10.2(1) - Результат підрахунку кількості пунктуаційних знаків та дозапис до вхідного файлу: \t"
             << (numPunctuationMarksInFile("inputFile.txt", inputText[i]) == numPunctuationMarks[i])  << endl;
        cout << boolalpha
             << "10.2(2) - Дозапис часу редагування файлу до вхідного файлу: \t\t\t\t\t"
             << timestampInFile("inputFile.txt") << endl;
        cout << boolalpha
             << "10.3(1) - Дозапис результату функції s_calculation до вихідного файлу: \t\t\t\t"
             << (floor(sCalculationResInFile("inputFile.txt", sCalcX[i], sCalcY[i], sCalcZ[i]) * 1000) / 1000 == expectedResult[i]) << endl;
        cout << boolalpha
             << "10.3(2) - Результат конвертування десяткового числа в двійкове та дозапис до вихідного файлу: \t"
             << decimalToBinary("outputFile.txt", naturalNum[i]) << endl << endl << endl;

        _getch();
    }
    return 0;
}
