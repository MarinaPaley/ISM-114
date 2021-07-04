#include "function.h"
#include <iostream>

function::function(float a, float b, float c) { //конструктор
	this->a = a;
	this->b = b;
	this->c = c;
}

void function::set_a(float a) {
	this->a = a;
}

void function::set_b(float b) {
	this->b = b;
}

void function::set_c(float c) {
	this->c = c;
}

float function::get_a() const {
	return a;
}

float function::get_b() const {
	return b;
}

float function::get_c() const {
	return c;
}

function function::derivative() {
	return function(0, 2 * a, b);
}

std::ostream& operator<<(std::ostream& out, const function& function) {
	if (function.get_a() != 0)
		out << function.get_a() << "x^2 ";
	if (function.get_b() != 0)
		out << "+ " << function.get_b() << "x ";
	out << "+ " << function.get_c() << std::endl;
	return out;
}

parabola::parabola(float a, float b, float c)
	:function(a, b, c) {}


linear_function::linear_function(float a, float b)
	: function(0, a, b) {}

constant::constant(float a)
	: function(0, 0, a) {}

