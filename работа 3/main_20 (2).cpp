#include <iostream>
#include "Complex.h"

int main() {
    Complex c(14, 2), c1(12, 3);
    Complex c2;
    c2 = c1 + c;
    std::cout << c2.Re() << ' ' << c2.Im() << '\n';
    c2 = c1 * c;
    std::cout << c2.Re() << ' ' << c2.Im() << '\n';
    c2 = c1 - c;
    std::cout << c2.First() << ' ' << c2.Second() << '\n';
    std::cout << c2.Re() << " * " << c2.Im() << " = " <<  c2.multiply();
}
