#pragma once
#include <string>
#include <exception>
#include <stdexcept>
#include <cmath>

class MyExcept1 {};

class MyExcept2 {
private:
    std::string msg;
public:
    MyExcept2(const std::string &s) : msg(s) {}
    const char *what() const;
};

class MyExcept3 : public std::invalid_argument {
public:
    MyExcept3(const std::string msg) : invalid_argument(msg) {}
};

struct Angles {
    double angle_opposite_a, angle_opposite_b;
};

Angles find_angles_without_ex(double a, double b);

Angles find_angles_with_ex(double a, double b);


Angles find_angles_with_std_ex(double a, double b);

Angles find_angles_with_my_empty_ex(double a, double b);

Angles find_angles_with_my_ex(double a, double b);

Angles find_angles_with_my_std_ex(double a, double b);