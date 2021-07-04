#include <iostream>
#include "function.h"

using namespace std;

int main() {
    setlocale(0, "");

    float a, b, c;
    cout << "Введите коэффициенты a, b, c: ";

    cin >> a >> b >> c;

    function f(a, b, c);

    cout << "Функция от одной переменной: " << f << "Её производная: " << f.derivative() << "Вторая производная: " << f.derivative().derivative() << endl;
    // -----------------------------------------------

    cout << "Введите коэффициенты для параболы a, b, c: ";
    cin >> a >> b >> c;
    parabola p(a, b, c);

    cout << "Парабола: " << p << "Её производная: " << p.derivative() << "Вторая производная: " << p.derivative().derivative() << endl;

    // -----------------------------------------------
    cout << "Введите коэффициенты для линейной функции a, b: ";
    cin >> a >> b;
    linear_function l(a, b);

    cout << "Линейная функция: " << l << "Её производная: " << l.derivative() << endl;

    // -----------------------------------------------
    cout << "Введите коэффициенты для константы с: ";
    cin >> c;

    constant constant(c);
    cout << "Константа: " << constant << "Её производная: " << constant.derivative();
}

