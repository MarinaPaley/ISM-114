#include "angles.h"
#include <iostream>

int main() {
    double a, b;
    Angles result {0, 0};
    std::cout << "Без исключений:\n";
    a = -1, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_without_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const std::exception &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 0, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_without_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const std::exception &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 3, b = 4;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_without_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const std::exception &Ex) {
        std::cout << Ex.what() << '\n';
    }
    std::cout << "Со спецификацией throw:\n";
    a = -1, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (char const* &Ex) {
        std::cout << Ex << '\n';
    }
    a = 0, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (char const* Ex) {
        std::cout << Ex << '\n';
    }
    a = 3, b = 4;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (char const* &Ex) {
        std::cout << Ex << '\n';
    }

    std::cout << "Стандартное исключение:\n";
    a = -1, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_std_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const std::exception &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 0, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_std_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const std::exception &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 3, b = 4;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_std_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const std::exception &Ex) {
        std::cout << Ex.what() << '\n';
    }

    std::cout << "Мое пустое исключение:\n";
    a = -1, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_empty_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept1 &Ex) {
        std::cout << '\n';
    }
    a = 0, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_empty_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept1 &Ex) {
        std::cout << '\n';
    }
    a = 3, b = 4;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_empty_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept1 &Ex) {
        std::cout << '\n';
    }
    std::cout << "Мое исключение с сообщением:\n";
    a = -1, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept2 &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 0, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept2 &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 3, b = 4;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept2 &Ex) {
        std::cout << Ex.what() << '\n';
    }
    std::cout << "Мое исключение с наследованием от стандартного исключения:\n";
    a = -1, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_std_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept3 &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 0, b = 3;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_std_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept3 &Ex) {
        std::cout << Ex.what() << '\n';
    }
    a = 3, b = 4;
    std::cout << "a = " << a << ", b = " << b << '\n';
    try {
        result = find_angles_with_my_std_ex(a, b);
        std::cout << "Угол напротив катета A (в Радианах): " << result.angle_opposite_a
                  << "\nУгол напротив катета B (в Радианах): " << result.angle_opposite_b << '\n';
    } catch (const MyExcept3 &Ex) {
        std::cout << Ex.what() << '\n';
    }

}