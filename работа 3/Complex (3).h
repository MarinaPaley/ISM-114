class Pair {
protected:
    double first_, second_;
public:
    Pair(const double& first, const double& second) : first_(first), second_(second) {}
    double First();
    double Second();
    friend Pair operator+(const Pair& lhs, const Pair& rhs);
    double multiply();
};

class Complex : public Pair{
public:
    Complex() : Pair(0, 0) {}
    Complex(const double& re, const double& im) : Pair(re, im){}
    Complex(const Pair& data) : Pair(data) {}
    friend Complex operator*(const Complex& lhs, const Complex& rhs);
    friend Complex operator-(const Complex& lhs, const Complex& rhs);
    double Re();
    double Im();
};