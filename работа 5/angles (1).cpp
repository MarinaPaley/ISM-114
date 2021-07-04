#include "angles.h"

const char *MyExcept2::what() const {
    return msg.c_str();
}

Angles find_angles_without_ex(double a, double b) {
    return {std::asin(a / (std::sqrt(a * a + b * b))), std::asin(b / (std::sqrt(a * a + b * b)))};
}

Angles find_angles_with_ex(double a, double b) {
    if (a < 0 || b < 0) {
        throw ("");
    }
    if (a == 0 || b == 0) {
        throw ("");
    }
    return {std::asin(a / (std::sqrt(a * a + b * b))), std::asin(b / (std::sqrt(a * a + b * b)))};
}


Angles find_angles_with_std_ex(double a, double b) {
    if (a < 0 || b < 0) {
        throw std::invalid_argument("Длина катета не может быть отрицательной");
    }
    if (a == 0 || b == 0) {
        throw std::invalid_argument("Длина катета не может равняться 0");
    }
    return {std::asin(a / (std::sqrt(a * a + b * b))), std::asin(b / (std::sqrt(a * a + b * b)))};
}

Angles find_angles_with_my_empty_ex(double a, double b) {
    if (a < 0 || b < 0) {
        throw MyExcept1();
    }
    if (a == 0 || b == 0) {
        throw MyExcept1();
    }
    return {std::asin(a / (std::sqrt(a * a + b * b))), std::asin(b / (std::sqrt(a * a + b * b)))};
}

Angles find_angles_with_my_ex(double a, double b) {
    if (a < 0 || b < 0) {
        throw MyExcept2("Длина катета не может быть отрицательной");
    }
    if (a == 0 || b == 0) {
        throw MyExcept2("Длина катета не может равняться 0");
    }
    return {std::asin(a / (std::sqrt(a * a + b * b))), std::asin(b / (std::sqrt(a * a + b * b)))};
}

Angles find_angles_with_my_std_ex(double a, double b) {
    if (a < 0 || b < 0) {
        throw MyExcept3("Длина катета не может быть отрицательной");
    }
    if (a == 0 || b == 0) {
        throw MyExcept3("Длина катета не может равняться 0");
    }
    return {std::asin(a / (std::sqrt(a * a + b * b))), std::asin(b / (std::sqrt(a * a + b * b)))};
}