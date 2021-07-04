#pragma once
#include <iostream>
using namespace std;

class function { //базовый класс
private:
	float a;
	float b;
	float c;
public:
	void set_a(float a);

	void set_b(float b);

	void set_c(float c);

	float get_a() const;

	float get_b() const;

	float get_c() const;

	function(float a = 1, float b = 1, float c = 1);
	
	function derivative();
};

ostream& operator<<(ostream& out, const function& function);

class parabola : public function { //класс парабола
public:
	parabola(float a = 1, float b = 0, float c = 0);
};

class linear_function : public function { //класс линейная функция
public:
	linear_function(float a = 1, float b = 0); 
};

class constant : public function { //класс константа
public:
	constant(float a = 1);
};