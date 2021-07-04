#include "Complex.h"

double Pair::First() {
    return first_;
}

double Pair::Second() {
    return second_;
}

Pair operator+(const Pair &lhs, const Pair &rhs) {
    return Pair(lhs.first_ + lhs.second_, rhs.first_ + rhs.second_);
}

double Pair::multiply() {
    return first_ * second_;
}


Complex operator*(const Complex &lhs, const Complex &rhs) {
    return Complex(lhs.first_*rhs.first_ - lhs.second_*rhs.second_, lhs.first_ * rhs.second_ + lhs.second_ * rhs.first_);
}

Complex operator-(const Complex &lhs, const Complex &rhs) {
    return Complex(lhs.first_ - lhs.second_, rhs.first_ - rhs.second_);
}

double Complex::Im() {
    return this->second_;
}

double Complex::Re() {
    return this->first_;
}

