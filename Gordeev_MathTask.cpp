#include "Gordeev_MathTask.h"
#include <iostream>
using namespace std;

// Основная программа
int main() {
    int a, b;
    EnterDigit(a, "Сторона A");
    EnterDigit(b, "Сторона B");
    cout << "Площадь прямоугольника: " << CalcRectangleArea(a, b) << endl;
    cout << "Периметр прямоугольника: " << CalcRectanglePerimeter(a, b) << endl;
    return 0;
}