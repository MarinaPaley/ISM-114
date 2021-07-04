#pragma once
class Fraction {
private:
    long int int_part; //целая часть числа

    unsigned short fract_part; //дробная часть числа

    const int max_fract_count = 4;  //максимальное кол-во цифр в дробной части

    int count_digits(int num); //подсчёт количество цифр в числе

public:
    Fraction(long int int_part, unsigned short fract_part); //конструктор дробного числа

    Fraction operator+(const Fraction& other); //сложение двух дробных чисел

    Fraction operator-(const Fraction& other); //вычитание двух дробных чисел

    Fraction operator*(const Fraction& other); // умножение двух дробных чисел

    bool operator==(const Fraction& other); //сравнение двух дробных чисел

    void print(); //вывод на экран дробного числа в виде 1.1234
};