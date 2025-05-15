#ifndef _GORDEEV_MATHTASK_H_
#define _GORDEEV_MATHTASK_H_

#include <string>
#include <iostream>

using namespace std;

// Функция контроля ввода данных
bool UserInput(string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
    }
    catch (...)
    { return false; }
    return true;
}

// Метод ввода данных
void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

// Вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}

// Вычисление периметра прямоугольника
int CalcRectanglePerimeter(int NumberA, int NumberB) {
    return 2 * (NumberA + NumberB);
}

#endif