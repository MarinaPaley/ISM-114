#include <iostream>
#include <math.h>
#include "Fraction.h"

using namespace std;

int Fraction::count_digits(int num) { //подсчёт количество цифр в числе
	int count = 0;
	int res = num;

	while (res > 0) {
		res /= 10;
		count++;
	}

	return count;
}

Fraction::Fraction(long int int_part, unsigned short fract_part) : int_part(int_part), fract_part(fract_part) { //конструктор
	if (count_digits(fract_part) > max_fract_count) { //в дробной части можно хранить только 4-х значные числа
		cout << "Превышено максимальное значение для дробной части, информация может быть потеряна.";
	}
}

Fraction Fraction::operator+(const Fraction& other) { //сложение
	// складывем целые части. Если дробная часть переходит за десяток, то добавляем +1 к целой,
	// а от дробной отнимаем 1 разряд, то есть 10000
	unsigned short fract_tmp = fract_part + other.fract_part;
	int int_tmp = 0;
	if (count_digits(fract_tmp) > max_fract_count) {
		int_tmp++;
		fract_tmp -= 10000;
	}

	return Fraction(int_part + other.int_part + int_tmp, fract_tmp);
}

Fraction Fraction::operator-(const Fraction& other) { //вычитание 
	if (*this == other) //сразу возвращаем 0, если числа равны
		return Fraction(0, 0);

	int coeff = 1;
	unsigned short fract_tmp = fract_part; //то, от чего отнимать (дробная часть)
	int int_tmp = int_part; //то, от чего отнимать (целая часть)
	unsigned short fract_tmp_ = other.fract_part; //то, что отнимать (дробная часть)
	int int_tmp_ = other.int_part; //то, что отнимать(дробная)

	if (int_part <= other.int_part && fract_part <= other.fract_part) { //если первое меньше второго, 
		//то отнимаем от второго и ставим знак минус.
		//меняем местами вычитаемое и уменьшаемое:
		fract_tmp = other.fract_part;
		fract_tmp_ = fract_part;
		int_tmp = other.int_part;
		int_tmp_ = int_part;
		coeff = -1;
	}

	if (fract_tmp < fract_tmp_) { //если перешли за десяток, то забираем единичку из целой части
		fract_tmp += 10000;
		int_tmp--;
	}

	return Fraction((int_tmp - int_tmp_) * coeff, fract_tmp - fract_tmp_);
}

Fraction Fraction::operator*(const Fraction& other) { // умножение
	double first = int_part;
	double tmp = fract_part;
	tmp /= 10000;
	first += tmp; //перевели первое число в double

	double second = other.int_part;
	tmp = other.fract_part;
	tmp /= 10000;
	second += tmp; //перевели второе в double

	double res = first * second; //перемножили

	double int_tmp = int_part;
	double fract_tmp = modf(res, &int_tmp); //разделили дробную и целую части

	return Fraction(int(int_tmp), short(fract_tmp * 10000));
}


bool Fraction::operator==(const Fraction& other) { //сравнение
	return int_part == other.int_part && fract_part == other.fract_part;
}

void Fraction::print() { //вывод на экран
	cout << int_part << ".";
	cout.fill('0');
	cout.width(max_fract_count);
	cout << fract_part << endl;
}


